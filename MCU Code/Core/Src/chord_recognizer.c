/*
 * chord_recognizer.c
 *
 *  Created on: Apr 17, 2026
 *      Author: syoshino
 */

#include "chord_recognizer.h"
#include "main.h"

#include <math.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define PI_F                        3.14159265358979f

#define FREQ_MIN_HZ                 75.0f
#define FREQ_MAX_HZ                 500.0f

#define HP_FC_HZ                    70.0f
#define LP_FC_HZ                    500.0f

#define MAX_DETECTED_PEAKS          14
#define PEAK_THRESHOLD_RATIO        0.16f
#define PEAK_GUARD_BINS             3
#define RECOGNIZE_MIN_ADC_SPAN      80.0f

/* tuning / matching */
#define FUNDAMENTAL_TOL_CENTS       35.0f
#define HARMONIC_TOL_CENTS          45.0f

/* weights */
#define WT_OPEN                     1.0f
#define WT_FRETTED                  3.0f
#define WT_BASS_FRETTED             5.0f

/* penalties / bonuses */
#define EXTRA_PEAK_PENALTY_SCALE    0.18f
#define MISS_NOTE_PENALTY_SCALE     0.40f
#define ROOT_BONUS_SCALE            0.18f
#define BASS_BONUS_SCALE            0.20f

#define SCORE_ACCEPT_THRESHOLD      0.46f

typedef struct {
    float freq;
    uint8_t is_open;        /* 1 = open string, 0 = fretted */
    uint8_t string_index;   /* 1..6, high E = 1, low E = 6 */
    float weight;           /* larger weight for fretted / bass-defining notes */
} TargetNote;

typedef struct {
    ChordDef *target_chord;
    const char *name;
    TargetNote notes[6];
    uint8_t num_notes;
    float root_freq;
} ChordFreqDef;

/* shared objects defined in main.c */
extern ADC_HandleTypeDef hadc1;
extern TIM_HandleTypeDef htim1;

extern uint16_t adc_buf[CR_FFT_LEN];
extern volatile uint8_t adc_buf_ready;

extern float32_t filt_buf[CR_FFT_LEN];
extern float32_t fft_in[CR_FFT_LEN];
extern float32_t fft_out[CR_FFT_LEN];
extern float32_t fft_mag[CR_FREQ_BINS];

extern arm_rfft_fast_instance_f32 fft_inst;

extern void send_frame_binary(float32_t dominant_freq,
                              float32_t adc_mean,
                              uint16_t adc_min,
                              uint16_t adc_max,
                              uint16_t adc_span);

/* ---------- chord target dictionary ----------
   string_index uses:
   6 = low E, 5 = A, 4 = D, 3 = G, 2 = B, 1 = high E
*/
static const ChordFreqDef chord_freq_dict[] = {
    { &chord_C, "C",
      {
        {130.81f, 0, 5, WT_BASS_FRETTED},
        {164.81f, 0, 4, WT_FRETTED},
        {196.00f, 1, 3, WT_OPEN},
        {261.63f, 0, 2, WT_FRETTED},
        {329.63f, 1, 1, WT_OPEN}
      },
      5, 130.81f
    },

    { &chord_Am, "Am",
      {
        {110.00f, 1, 5, WT_OPEN},
        {164.81f, 0, 4, WT_FRETTED},
        {220.00f, 0, 3, WT_FRETTED},
        {261.63f, 0, 2, WT_FRETTED},
        {329.63f, 1, 1, WT_OPEN}
      },
      5, 110.00f
    },

    { &chord_Em, "Em",
      {
        { 82.41f, 1, 6, WT_OPEN},
        {123.47f, 1, 5, WT_OPEN},
        {164.81f, 0, 4, WT_FRETTED},
        {196.00f, 0, 3, WT_FRETTED},
        {246.94f, 1, 2, WT_OPEN},
        {329.63f, 1, 1, WT_OPEN}
      },
      6, 82.41f
    },

    { &chord_G, "G",
      {
        { 98.00f, 0, 6, WT_BASS_FRETTED},
        {123.47f, 0, 5, WT_FRETTED},
        {146.83f, 1, 4, WT_OPEN},
        {196.00f, 1, 3, WT_OPEN},
        {246.94f, 1, 2, WT_OPEN},
        {392.00f, 0, 1, WT_FRETTED}
      },
      6, 98.00f
    },

    { &chord_Dm, "Dm",
      {
        {146.83f, 1, 4, WT_OPEN},
        {220.00f, 1, 3, WT_OPEN},
        {293.66f, 0, 2, WT_FRETTED},
        {349.23f, 0, 1, WT_BASS_FRETTED}
      },
      4, 146.83f
    },

    { &chord_F, "F",
      {
        { 87.31f, 0, 6, WT_BASS_FRETTED},
        {130.81f, 0, 5, WT_FRETTED},
        {174.61f, 0, 4, WT_FRETTED},
        {220.00f, 1, 3, WT_OPEN},
        {261.63f, 0, 2, WT_FRETTED},
        {349.23f, 0, 1, WT_FRETTED}
      },
      6, 87.31f
    },

    { &chord_D, "D",
      {
        {146.83f, 1, 4, WT_OPEN},
        {220.00f, 1, 3, WT_OPEN},
        {293.66f, 0, 2, WT_FRETTED},
        {369.99f, 0, 1, WT_BASS_FRETTED}
      },
      4, 146.83f
    },

    { &chord_A, "A",
      {
        {110.00f, 1, 5, WT_OPEN},
        {164.81f, 1, 4, WT_OPEN},
        {220.00f, 0, 3, WT_FRETTED},
        {277.18f, 0, 2, WT_BASS_FRETTED},
        {329.63f, 1, 1, WT_OPEN}
      },
      5, 110.00f
    },

    { &chord_E, "E",
      {
        { 82.41f, 1, 6, WT_OPEN},
        {123.47f, 1, 5, WT_OPEN},
        {164.81f, 1, 4, WT_OPEN},
        {207.65f, 0, 3, WT_BASS_FRETTED},
        {246.94f, 1, 2, WT_OPEN},
        {329.63f, 1, 1, WT_OPEN}
      },
      6, 82.41f
    },

    { &chord_Fsm, "F#m",
      {
        { 92.50f, 0, 6, WT_BASS_FRETTED},
        {138.59f, 0, 5, WT_FRETTED},
        {185.00f, 0, 4, WT_FRETTED},
        {220.00f, 1, 3, WT_OPEN},
        {277.18f, 0, 2, WT_FRETTED},
        {369.99f, 0, 1, WT_FRETTED}
      },
      6, 92.50f
    },

    { &chord_Bm, "Bm",
      {
        {123.47f, 1, 5, WT_OPEN},
        {185.00f, 0, 4, WT_FRETTED},
        {246.94f, 0, 3, WT_FRETTED},
        {293.66f, 0, 2, WT_BASS_FRETTED},
        {369.99f, 0, 1, WT_FRETTED}
      },
      5, 123.47f
    },

    { &chord_Gsm, "G#m",
      {
        {103.83f, 0, 6, WT_BASS_FRETTED},
        {155.56f, 0, 5, WT_FRETTED},
        {207.65f, 0, 4, WT_FRETTED},
        {246.94f, 1, 3, WT_OPEN},
        {311.13f, 0, 2, WT_FRETTED},
        {415.30f, 0, 1, WT_FRETTED}
      },
      6, 103.83f
    },

    { &chord_B, "B",
      {
        {123.47f, 1, 5, WT_OPEN},
        {185.00f, 0, 4, WT_FRETTED},
        {246.94f, 0, 3, WT_FRETTED},
        {311.13f, 0, 2, WT_BASS_FRETTED},
        {369.99f, 0, 1, WT_FRETTED}
      },
      5, 123.47f
    },

    { &chord_Gm, "Gm",
      {
        { 98.00f, 0, 6, WT_BASS_FRETTED},
        {146.83f, 0, 5, WT_FRETTED},
        {196.00f, 0, 4, WT_FRETTED},
        {233.08f, 0, 3, WT_FRETTED},
        {293.66f, 0, 2, WT_FRETTED},
        {392.00f, 0, 1, WT_FRETTED}
      },
      6, 98.00f
    },

    { &chord_Csm, "C#m",
      {
        {138.59f, 1, 5, WT_OPEN},
        {207.65f, 0, 4, WT_FRETTED},
        {277.18f, 0, 3, WT_FRETTED},
        {329.63f, 1, 2, WT_OPEN},
        {415.30f, 0, 1, WT_BASS_FRETTED}
      },
      5, 138.59f
    },

    { &chord_Bb, "Bb",
      {
        {116.54f, 0, 5, WT_BASS_FRETTED},
        {174.61f, 0, 4, WT_FRETTED},
        {233.08f, 0, 3, WT_FRETTED},
        {293.66f, 0, 2, WT_FRETTED},
        {349.23f, 0, 1, WT_FRETTED}
      },
      5, 116.54f
    },

    { &chord_Fs, "F#",
      {
        { 92.50f, 0, 6, WT_BASS_FRETTED},
        {138.59f, 0, 5, WT_FRETTED},
        {185.00f, 0, 4, WT_FRETTED},
        {233.08f, 0, 3, WT_FRETTED},
        {277.18f, 0, 2, WT_FRETTED},
        {369.99f, 0, 1, WT_FRETTED}
      },
      6, 92.50f
    }
};

static const int NUM_FREQ_CHORDS =
    (int)(sizeof(chord_freq_dict) / sizeof(chord_freq_dict[0]));

/* ---------- persistent state ---------- */
static float32_t hp_x_prev = 0.0f;
static float32_t hp_y_prev = 0.0f;
static float32_t lp_y_prev = 0.0f;
static uint8_t recognizer_initialized = 0;

static float last_detected_freqs[MAX_DETECTED_PEAKS];
static float last_detected_mags[MAX_DETECTED_PEAKS];
static int   last_num_peaks = 0;
static const ChordFreqDef *last_best_def = NULL;
static float last_best_score = 0.0f;

/* ---------- helpers ---------- */

static float32_t hann_window(int i, int n)
{
    return 0.5f - 0.5f * arm_cos_f32(2.0f * PI_F * i / (n - 1));
}

static float32_t highpass_1pole(float32_t x, float32_t alpha)
{
    float32_t y = alpha * (hp_y_prev + x - hp_x_prev);
    hp_x_prev = x;
    hp_y_prev = y;
    return y;
}

static float32_t lowpass_1pole(float32_t x, float32_t alpha)
{
    float32_t y = lp_y_prev + alpha * (x - lp_y_prev);
    lp_y_prev = y;
    return y;
}

static void reset_filter_state(void)
{
    hp_x_prev = 0.0f;
    hp_y_prev = 0.0f;
    lp_y_prev = 0.0f;
}

static const char* nearest_note_name(float32_t f)
{
    static const char* names[12] = {
        "C", "C#", "D", "D#", "E", "F",
        "F#", "G", "G#", "A", "Bb", "B"
    };

    if (f <= 0.0f) return "?";

    float midi_f = 69.0f + 12.0f * log2f(f / 440.0f);
    int midi = (int)lroundf(midi_f);
    int pc = midi % 12;
    if (pc < 0) pc += 12;
    return names[pc];
}

static float abs_cents_error(float f_detect, float f_ref)
{
    if (f_detect <= 0.0f || f_ref <= 0.0f) return 1e9f;
    float cents = 1200.0f * log2f(f_detect / f_ref);
    return (cents >= 0.0f) ? cents : -cents;
}

static float quality_from_cents(float abs_cents, float tol_cents)
{
    if (abs_cents > tol_cents) return 0.0f;
    return 1.0f - (abs_cents / tol_cents);
}

static float best_match_quality_to_target(float detected_f, float target_f)
{
    float best = 0.0f;

    for (int h = 1; h <= 3; h++)
    {
        float ref = target_f * (float)h;
        if (ref > 520.0f) break;

        float tol = (h == 1) ? FUNDAMENTAL_TOL_CENTS : HARMONIC_TOL_CENTS;
        float q = quality_from_cents(abs_cents_error(detected_f, ref), tol);
        if (q > best) best = q;
    }

    return best;
}

static void preprocess_and_fft(float* adc_mean_out,
                               uint16_t* adc_min_out,
                               uint16_t* adc_max_out,
                               uint16_t* adc_span_out)
{
    uint16_t min_adc = 4095;
    uint16_t max_adc = 0;
    float mean = 0.0f;

    for (int i = 0; i < CR_FFT_LEN; i++)
    {
        if (adc_buf[i] < min_adc) min_adc = adc_buf[i];
        if (adc_buf[i] > max_adc) max_adc = adc_buf[i];
        mean += (float)adc_buf[i];
    }
    mean /= (float)CR_FFT_LEN;

    *adc_mean_out = mean;
    *adc_min_out = min_adc;
    *adc_max_out = max_adc;
    *adc_span_out = (uint16_t)(max_adc - min_adc);

    const float T = 1.0f / CR_FS_HZ;

    const float hp_tau = 1.0f / (2.0f * PI_F * HP_FC_HZ);
    const float hp_alpha = hp_tau / (hp_tau + T);

    const float lp_tau = 1.0f / (2.0f * PI_F * LP_FC_HZ);
    const float lp_alpha = T / (lp_tau + T);

    reset_filter_state();

    for (int i = 0; i < CR_FFT_LEN; i++)
    {
        float x = (float)adc_buf[i] - mean;
        float hp = highpass_1pole(x, hp_alpha);
        float bp = lowpass_1pole(hp, lp_alpha);
        filt_buf[i] = bp;
    }

    for (int i = 0; i < CR_FFT_LEN; i++)
    {
        fft_in[i] = filt_buf[i] * hann_window(i, CR_FFT_LEN);
    }

    arm_rfft_fast_f32(&fft_inst, fft_in, fft_out, 0);

    fft_mag[0] = fabsf(fft_out[0]);
    fft_mag[CR_FFT_LEN / 2] = fabsf(fft_out[1]);

    for (int k = 1; k < CR_FFT_LEN / 2; k++)
    {
        float re = fft_out[2 * k];
        float im = fft_out[2 * k + 1];
        fft_mag[k] = sqrtf(re * re + im * im);
    }
}

static float estimate_dominant_frequency(void)
{
    int k_min = (int)(FREQ_MIN_HZ * CR_FFT_LEN / CR_FS_HZ + 0.5f);
    int k_max = (int)(FREQ_MAX_HZ * CR_FFT_LEN / CR_FS_HZ + 0.5f);

    if (k_min < 2) k_min = 2;
    if (k_max > (CR_FFT_LEN / 2 - 2)) k_max = (CR_FFT_LEN / 2 - 2);

    float32_t best_mag = 0.0f;
    int best_k = k_min;

    for (int k = k_min; k <= k_max; k++)
    {
        if (fft_mag[k] > best_mag)
        {
            best_mag = fft_mag[k];
            best_k = k;
        }
    }

    float32_t alpha = fft_mag[best_k - 1];
    float32_t beta  = fft_mag[best_k];
    float32_t gamma = fft_mag[best_k + 1];

    float32_t delta = 0.0f;
    float32_t denom = alpha - 2.0f * beta + gamma;
    if (fabsf(denom) > 1e-9f)
    {
        delta = 0.5f * (alpha - gamma) / denom;
    }

    return ((float32_t)best_k + delta) * CR_FS_HZ / (float32_t)CR_FFT_LEN;
}

static int is_far_enough_from_existing_peak(const float* freqs, int count, float f)
{
    for (int i = 0; i < count; i++)
    {
        float bins_apart = fabsf(freqs[i] - f) * CR_FFT_LEN / CR_FS_HZ;
        if (bins_apart < PEAK_GUARD_BINS)
        {
            return 0;
        }
    }
    return 1;
}

static int extract_top_peaks(float* peak_freqs, float* peak_mags, int max_peaks)
{
    int k_min = (int)(FREQ_MIN_HZ * CR_FFT_LEN / CR_FS_HZ + 0.5f);
    int k_max = (int)(FREQ_MAX_HZ * CR_FFT_LEN / CR_FS_HZ + 0.5f);

    if (k_min < 2) k_min = 2;
    if (k_max > (CR_FFT_LEN / 2 - 2)) k_max = (CR_FFT_LEN / 2 - 2);

    float max_mag = 0.0f;
    for (int k = k_min; k <= k_max; k++)
    {
        if (fft_mag[k] > max_mag) max_mag = fft_mag[k];
    }

    if (max_mag <= 1e-6f) return 0;

    const float threshold = PEAK_THRESHOLD_RATIO * max_mag;
    int num = 0;

    for (int pass = 0; pass < max_peaks; pass++)
    {
        int best_k = -1;
        float best_mag = 0.0f;
        float best_freq = 0.0f;

        for (int k = k_min; k <= k_max; k++)
        {
            if (fft_mag[k] < threshold) continue;
            if (!(fft_mag[k] > fft_mag[k - 1] && fft_mag[k] > fft_mag[k + 1])) continue;

            float alpha = fft_mag[k - 1];
            float beta  = fft_mag[k];
            float gamma = fft_mag[k + 1];

            float delta = 0.0f;
            float denom = alpha - 2.0f * beta + gamma;
            if (fabsf(denom) > 1e-9f)
            {
                delta = 0.5f * (alpha - gamma) / denom;
            }

            float freq = ((float)k + delta) * CR_FS_HZ / (float)CR_FFT_LEN;

            if (!is_far_enough_from_existing_peak(peak_freqs, num, freq)) continue;

            if (fft_mag[k] > best_mag)
            {
                best_mag = fft_mag[k];
                best_k = k;
                best_freq = freq;
            }
        }

        if (best_k < 0) break;

        peak_freqs[num] = best_freq;
        peak_mags[num]  = best_mag;
        num++;
    }

    return num;
}

static float score_chord_against_peaks(const ChordFreqDef *chord,
                                       const float *detected_freqs,
                                       const float *detected_mags,
                                       int num_peaks)
{
    if (num_peaks <= 0) return 0.0f;

    float mag_sum = 0.0f;
    for (int i = 0; i < num_peaks; i++)
    {
        mag_sum += detected_mags[i];
    }
    if (mag_sum <= 1e-6f) return 0.0f;

    float weighted_hit_sum = 0.0f;
    float weighted_total = 0.0f;
    float weighted_miss_sum = 0.0f;
    float fretted_hit_sum = 0.0f;
    float fretted_total = 0.0f;

    for (int n = 0; n < chord->num_notes; n++)
    {
        float best_q = 0.0f;
        for (int i = 0; i < num_peaks; i++)
        {
            float q = best_match_quality_to_target(detected_freqs[i], chord->notes[n].freq);
            if (q > best_q) best_q = q;
        }

        weighted_hit_sum += chord->notes[n].weight * best_q;
        weighted_miss_sum += chord->notes[n].weight * (1.0f - best_q);
        weighted_total += chord->notes[n].weight;

        if (!chord->notes[n].is_open)
        {
            fretted_hit_sum += chord->notes[n].weight * best_q;
            fretted_total += chord->notes[n].weight;
        }
    }

    float weighted_coverage = (weighted_total > 1e-6f) ? (weighted_hit_sum / weighted_total) : 0.0f;
    float fretted_coverage  = (fretted_total > 1e-6f) ? (fretted_hit_sum / fretted_total) : weighted_coverage;
    float miss_penalty      = (weighted_total > 1e-6f) ? (weighted_miss_sum / weighted_total) : 0.0f;

    float extra_penalty = 0.0f;
    for (int i = 0; i < num_peaks; i++)
    {
        float best_q = 0.0f;
        for (int n = 0; n < chord->num_notes; n++)
        {
            float q = best_match_quality_to_target(detected_freqs[i], chord->notes[n].freq);
            if (q > best_q) best_q = q;
        }

        float w = detected_mags[i] / mag_sum;
        extra_penalty += (1.0f - best_q) * w;
    }

    float root_q = 0.0f;
    float bass_q = 0.0f;

    for (int i = 0; i < num_peaks; i++)
    {
        float q_root = quality_from_cents(abs_cents_error(detected_freqs[i], chord->root_freq),
                                          FUNDAMENTAL_TOL_CENTS);
        if (q_root > root_q) root_q = q_root;
    }

    for (int n = 0; n < chord->num_notes; n++)
    {
        if (chord->notes[n].weight >= WT_BASS_FRETTED)
        {
            for (int i = 0; i < num_peaks; i++)
            {
                float q = quality_from_cents(abs_cents_error(detected_freqs[i], chord->notes[n].freq),
                                             FUNDAMENTAL_TOL_CENTS);
                if (q > bass_q) bass_q = q;
            }
        }
    }

    float score =
        0.35f * weighted_coverage +
        0.45f * fretted_coverage +
        ROOT_BONUS_SCALE * root_q +
        BASS_BONUS_SCALE * bass_q -
        MISS_NOTE_PENALTY_SCALE * miss_penalty -
        EXTRA_PEAK_PENALTY_SCALE * extra_penalty;

    if (score < 0.0f) score = 0.0f;
    if (score > 1.0f) score = 1.0f;

    return score;
}

static ChordDef* recognize_from_peaks(const float* detected_freqs,
                                      const float* detected_mags,
                                      int num_peaks,
                                      float* best_score_out)
{
    float best_score = -1.0f;
    const ChordFreqDef *best_def = NULL;

    for (int i = 0; i < NUM_FREQ_CHORDS; i++)
    {
        float s = score_chord_against_peaks(&chord_freq_dict[i],
                                            detected_freqs,
                                            detected_mags,
                                            num_peaks);
        if (s > best_score)
        {
            best_score = s;
            best_def = &chord_freq_dict[i];
        }
    }

    last_best_def = best_def;
    last_best_score = (best_score > 0.0f) ? best_score : 0.0f;

    if (best_score_out != NULL)
    {
        *best_score_out = last_best_score;
    }

    if (best_def == NULL || best_score < SCORE_ACCEPT_THRESHOLD)
    {
        return NULL;
    }

    return best_def->target_chord;
}

/* ---------- public API ---------- */

void chord_recognizer_audio_init(void)
{
    if (recognizer_initialized) return;

    arm_rfft_fast_init_f32(&fft_inst, CR_FFT_LEN);
    HAL_TIM_Base_Start(&htim1);

    recognizer_initialized = 1;
    printf("Chord recognizer audio init done\r\n");
}

ChordDef* recognize_chord_from_audio(void)
{
    if (!recognizer_initialized)
    {
        chord_recognizer_audio_init();
    }

    adc_buf_ready = 0;
    HAL_ADC_Start_DMA(&hadc1, (uint32_t*)adc_buf, CR_FFT_LEN);

    while (!adc_buf_ready)
    {
    }

    HAL_ADC_Stop_DMA(&hadc1);
    adc_buf_ready = 0;

    float adc_mean = 0.0f;
    uint16_t adc_min = 0;
    uint16_t adc_max = 0;
    uint16_t adc_span = 0;

    preprocess_and_fft(&adc_mean, &adc_min, &adc_max, &adc_span);

    float dominant_freq = estimate_dominant_frequency();

    printf("ADC mean=%.1f min=%u max=%u span=%u | freq=%.2f Hz | nearest_note=%s\r\n",
           adc_mean, adc_min, adc_max, adc_span, dominant_freq,
           nearest_note_name(dominant_freq));

    send_frame_binary(dominant_freq, adc_mean, adc_min, adc_max, adc_span);

    if ((float)adc_span < RECOGNIZE_MIN_ADC_SPAN)
    {
        last_num_peaks = 0;
        last_best_def = NULL;
        last_best_score = 0.0f;
        return NULL;
    }

    last_num_peaks = extract_top_peaks(last_detected_freqs,
                                       last_detected_mags,
                                       MAX_DETECTED_PEAKS);

    if (last_num_peaks <= 0)
    {
        last_best_def = NULL;
        last_best_score = 0.0f;
        return NULL;
    }

    float best_score = 0.0f;
    ChordDef* chord = recognize_from_peaks(last_detected_freqs,
                                           last_detected_mags,
                                           last_num_peaks,
                                           &best_score);

    printf("Chord detect: peaks=%d best_score=%.3f ",
           last_num_peaks, best_score);

    if (chord != NULL)
    {
        printf("-> %s\r\n", chord->name);
    }
    else
    {
        printf("-> none\r\n");
    }

    for (int i = 0; i < last_num_peaks; i++)
    {
        printf("  peak[%d] = %.2f Hz mag=%.2f note=%s\r\n",
               i, last_detected_freqs[i], last_detected_mags[i],
               nearest_note_name(last_detected_freqs[i]));
    }

    if (last_best_def != NULL)
    {
        printf("  best target %s:", last_best_def->name);
        for (int i = 0; i < last_best_def->num_notes; i++)
        {
            printf(" %.2f", last_best_def->notes[i].freq);
        }
        printf("\r\n");
    }

    return chord;
}

int evaluate_current_chord_score(const ChordDef* target_chord)
{
    if (target_chord == NULL || last_num_peaks <= 0)
    {
        return 0;
    }

    const ChordFreqDef *def = NULL;
    for (int i = 0; i < NUM_FREQ_CHORDS; i++)
    {
        if (chord_freq_dict[i].target_chord == target_chord)
        {
            def = &chord_freq_dict[i];
            break;
        }
    }

    if (def == NULL) return 0;

    float score = score_chord_against_peaks(def,
                                            last_detected_freqs,
                                            last_detected_mags,
                                            last_num_peaks);

    if (score <= SCORE_MIN_THRESHOLD) return 0;
    if (score >= SCORE_MAX_THRESHOLD) return 100;

    return (int)(((score - SCORE_MIN_THRESHOLD) /
                 (SCORE_MAX_THRESHOLD - SCORE_MIN_THRESHOLD)) * 100.0f);
}

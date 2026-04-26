/*
 * chord_recognizer.h
 *
 *  Created on: Apr 17, 2026
 *      Author: syoshino
 */

#ifndef INC_CHORD_RECOGNIZER_H_
#define INC_CHORD_RECOGNIZER_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "custom.h"
#include "arm_math.h"
#include <stdint.h>

#define SCORE_MIN_THRESHOLD   0.40f
#define SCORE_MAX_THRESHOLD   0.90f

#define CR_FS_HZ              8000.0f
#define CR_FFT_LEN            2048
#define CR_FREQ_BINS          (CR_FFT_LEN / 2 + 1)

void chord_recognizer_audio_init(void);
ChordDef* recognize_chord_from_audio(void);
int evaluate_current_chord_score(const ChordDef* target_chord);

#ifdef __cplusplus
}
#endif

#endif /* INC_CHORD_RECOGNIZER_H_ */

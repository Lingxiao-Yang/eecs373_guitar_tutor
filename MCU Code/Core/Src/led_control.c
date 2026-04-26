#include "led_control.h"

extern TIM_HandleTypeDef htim3;

static uint32_t pwm_buffer[PWM_BUFFER_SIZE];

static const uint8_t fade_table[TAIL_LENGTH] = {255, 128, 64, 32, 16, 4};

volatile uint8_t ws2813_is_busy = 0;

static void set_pixel_raw(uint16_t index, uint8_t r, uint8_t g, uint8_t b) {
    uint32_t offset = index * 24;
    // WS2813 color order: GRB, MSB first
    uint32_t grb = ((uint32_t)g << 16) | ((uint32_t)r << 8) | b;
    for (int i = 0; i < 24; i++) {
        pwm_buffer[offset + i] = (grb & (1u << (23 - i))) ? WS2813_T1H : WS2813_T0H;
    }
}

void DotStar_InitBuffer(void) {
    for (uint32_t i = 0; i < NUM_LEDS * 24; i++) {
        pwm_buffer[i] = WS2813_T0H;
    }
    for (uint32_t i = NUM_LEDS * 24; i < PWM_BUFFER_SIZE; i++) {
        pwm_buffer[i] = 0;
    }
}

void DotStar_ClearAll(void) {
    for (uint32_t i = 0; i < NUM_LEDS * 24; i++) {
        pwm_buffer[i] = WS2813_T0H;
    }
}

void DotStar_Update(void) {
	if (ws2813_is_busy){
		return;
	}
	ws2813_is_busy = 1;
    HAL_TIM_PWM_Start_DMA(&htim3, TIM_CHANNEL_2, pwm_buffer, PWM_BUFFER_SIZE);
}

void HAL_TIM_PWM_PulseFinishedCallback(TIM_HandleTypeDef *htim){
	if (htim->Instance == &htim3){
		HAL_TIM_PWM_Stop_DMA(&htim3, TIM_CHANNEL_2);
		ws2813_is_busy = 0;
	}
}
void SetPixelColor(uint16_t index, uint8_t r, uint8_t g, uint8_t b) {
    if (index >= NUM_LEDS) return;
    set_pixel_raw(index, r, g, b);
}

void DotStar_DrawSafeMeteor(int head_pos, uint8_t r, uint8_t g, uint8_t b) {
    DotStar_ClearAll();
    for (int i = 0; i < TAIL_LENGTH; i++) {
        int pixel_index = head_pos - i;
        if (pixel_index < 0) pixel_index += NUM_LEDS;
        uint8_t scale = fade_table[i];
        set_pixel_raw(pixel_index, (r * scale) >> 8, (g * scale) >> 8, (b * scale) >> 8);
    }
}

void DotStar_Generate(void) {
    int head_pos = 0;
    for (int flag = 0; flag < 100; flag++) {
        DotStar_DrawSafeMeteor(head_pos, 0, 128, 255);
        DotStar_Update();
        head_pos++;
        if (head_pos >= NUM_LEDS) head_pos = 0;
        HAL_Delay(30);
    }
    DotStar_ClearAll();
    DotStar_Update();
}

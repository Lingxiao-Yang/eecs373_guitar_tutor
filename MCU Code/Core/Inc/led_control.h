#ifndef __LED_CONTROL_H
#define __LED_CONTROL_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

#define NUM_LEDS        42
#define RESET_BITS      250             // 250 × 1.25μs = 312.5μs reset (WS2813 needs >280μs)
#define PWM_BUFFER_SIZE (NUM_LEDS * 24 + RESET_BITS)
#define TAIL_LENGTH     6

// At 72MHz SYSCLK, TIM3 ARR=89 → 800kHz (1.25μs period)
#define WS2813_T1H  48   // 58/90 × 1.25μs = 806ns high
#define WS2813_T0H  18   // 22/90 × 1.25μs = 306ns high

void DotStar_InitBuffer(void);
void DotStar_ClearAll(void);
void DotStar_DrawSafeMeteor(int head_pos, uint8_t r, uint8_t g, uint8_t b);
void DotStar_Update(void);
void DotStar_Generate(void);
void SetPixelColor(uint16_t index, uint8_t r, uint8_t g, uint8_t b);

#ifdef __cplusplus
}
#endif

#endif /* __LED_CONTROL_H */

/*
 * audio_manager.h
 *
 *  Created on: Apr 16, 2026
 *      Author: syoshino
 */

#ifndef INC_AUDIO_MANAGER_H_
#define INC_AUDIO_MANAGER_H_

#include "main.h" // 包含HAL库定义

// 定义和弦信息结构体
typedef struct {
    const uint16_t *pData;  // 音频数据指针
    uint32_t length;       // 数据长度
} Chord_Info;

// 外部可以访问的和弦实例（使用 extern）
extern Chord_Info Chord_A;
extern Chord_Info Chord_Am;
extern Chord_Info Chord_B;
extern Chord_Info Chord_Bb;
extern Chord_Info Chord_Bm;
extern Chord_Info Chord_C;
extern Chord_Info Chord_CSM;
extern Chord_Info Chord_D;
extern Chord_Info Chord_Dm;
extern Chord_Info Chord_E;
extern Chord_Info Chord_Em;
extern Chord_Info Chord_F;
extern Chord_Info Chord_FS;
extern Chord_Info Chord_FSM;
extern Chord_Info Chord_G;
extern Chord_Info Chord_Gm;
extern Chord_Info Chord_GSM;

// ... 根据需要添加其他和弦

// 函数声明
void Audio_Manager_Init(DAC_HandleTypeDef *hdac, TIM_HandleTypeDef *htim);
void Audio_Play_Chord(Chord_Info *chord);
void Audio_Stop(void);


#endif /* INC_AUDIO_MANAGER_H_ */

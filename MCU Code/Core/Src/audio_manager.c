/*
 * audio_manager.c
 *
 *  Created on: Apr 16, 2026
 *      Author: syoshino
 */


#include "audio_manager.h"
#include "gui_guider.h"
#include "A.h"
#include "Am.h"
#include "B.h"
#include "Bb.h"
#include "Bm.h"
#include "C.h"
#include "CSM.h"
#include "D.h"
#include "Dm.h"
#include "E.h"
#include "Em.h"
#include "F.h"
#include "FS.h"
#include "FSM.h"
#include "G.h"
#include "Gm.h"
#include "GSM.h"
// 内部私有变量，用于存储 main.c 传过来的句柄
static DAC_HandleTypeDef *audio_hdac;
static TIM_HandleTypeDef *audio_htim;
extern lv_ui guider_ui;
extern uint8_t is_playing;
// 实例化和弦对象
Chord_Info Chord_A = { A, sizeof(A) / sizeof(int16_t) };
Chord_Info Chord_Am = { Am, sizeof(Am) / sizeof(int16_t) };
Chord_Info Chord_B = { B, sizeof(B) / sizeof(int16_t) };
Chord_Info Chord_Bb = { Bb, sizeof(Bb) / sizeof(int16_t) };
Chord_Info Chord_Bm = { Bm, sizeof(Bm) / sizeof(int16_t) };
Chord_Info Chord_C = { C, sizeof(C) / sizeof(int16_t) };
Chord_Info Chord_CSM = { CSM, sizeof(CSM) / sizeof(int16_t) };
Chord_Info Chord_D = { D, sizeof(D) / sizeof(int16_t) };
Chord_Info Chord_Dm = { Dm, sizeof(Dm) / sizeof(int16_t) };
Chord_Info Chord_E = { E, sizeof(E) / sizeof(int16_t) };
Chord_Info Chord_Em = { Em, sizeof(Em) / sizeof(int16_t) };
Chord_Info Chord_F = { F, sizeof(F) / sizeof(int16_t) };
Chord_Info Chord_FS = { FS, sizeof(FS) / sizeof(int16_t) };
Chord_Info Chord_FSM = { FSM, sizeof(FSM) / sizeof(int16_t) };
Chord_Info Chord_G = { G, sizeof(G) / sizeof(int16_t) };
Chord_Info Chord_Gm = { Gm, sizeof(Gm) / sizeof(int16_t) };
Chord_Info Chord_GSM = { GSM, sizeof(GSM) / sizeof(int16_t) };

static void audio_monitor_timer_cb(lv_timer_t * t){
	DMA_HandleTypeDef *hdma = audio_hdac->DMA_Handle1;
	if (is_playing){
		if (HAL_DMA_GetState(hdma) == HAL_DMA_STATE_READY){
			is_playing = 0;
			lv_obj_t * btn_label = lv_obj_get_child(guider_ui.screen_chord_demo_label_play_pause, 0);
	        lv_label_set_text(btn_label, LV_SYMBOL_PLAY);
	        Audio_Stop();
		}
	}
}


/**
 * @brief 初始化音频管理模块
 * @param hdac 指向DAC句柄的指针
 * @param htim 指向定时器句柄的指针
 */
void Audio_Manager_Init(DAC_HandleTypeDef *hdac, TIM_HandleTypeDef *htim) {
    audio_hdac = hdac;
    audio_htim = htim;

    // 启动DAC输出通道
    HAL_DAC_Start(audio_hdac, DAC_CHANNEL_1);
    // 启动定时器，但不开启中断，仅用于触发DAC
    HAL_TIM_Base_Start(audio_htim);
    lv_timer_create(audio_monitor_timer_cb, 100, NULL);
}

/**
 * @brief 播放指定的和弦
 * @param chord 和弦结构体指针
 */
void Audio_Play_Chord(Chord_Info *chord) {
    if (chord == NULL || audio_hdac == NULL) return;

    // 先停止当前的传输，防止冲突
    HAL_DAC_Stop_DMA(audio_hdac, DAC_CHANNEL_1);

    // 开启新的DMA传输
    // 假设你的数据是12位对齐且已经过处理
    HAL_DAC_Start_DMA(audio_hdac, DAC_CHANNEL_1,
                     (uint32_t*)chord->pData,
                     chord->length,
                     DAC_ALIGN_12B_R);
}

/**
 * @brief 停止音频播放并将输出复位到中位电压
 */
void Audio_Stop(void) {
    HAL_DAC_Stop_DMA(audio_hdac, DAC_CHANNEL_1);
    // 可选：将DAC输出设为2048（1.65V中位电压），减少扬声器噪音
    HAL_DAC_SetValue(audio_hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R, 2048);
}

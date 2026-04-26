/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"


typedef struct {
    uint8_t string;
    uint8_t fret;
} Note;

typedef struct {
	const char* name;
    uint8_t led_indices[12]; // 存储 LED 编号
    uint8_t led_count;       // 该亮多少个灯
    Note notes[4];           // 屏幕显示的 4 个点
    uint8_t note_count;      // 屏幕点的数量
    uint8_t barre_fret;      // 横按品数 (0 为无)
    uint8_t barre_start_string;
    uint8_t barre_end_string;
    void * audio_info; 		// Chord_Info
} ChordDef;


extern ChordDef chord_C;
extern ChordDef chord_Dm;
extern ChordDef chord_Em;
extern ChordDef chord_F;
extern ChordDef chord_G;
extern ChordDef chord_Am;
extern ChordDef chord_G7;
extern ChordDef chord_D;
extern ChordDef chord_A;
extern ChordDef chord_E;
extern ChordDef chord_Fsm;
extern ChordDef chord_Bm;
extern ChordDef chord_Gsm;
extern ChordDef chord_B;
extern ChordDef chord_Gm;
extern ChordDef chord_Csm;
extern ChordDef chord_Bb;
extern ChordDef chord_Fs;
extern ChordDef* const chord_group_1[];
extern ChordDef* const chord_group_2[];
extern ChordDef* const chord_group_3[];
extern ChordDef** all_chord_groups[];
extern const int chord_group_counts[];
void custom_init(lv_ui *ui);

void show_chord(ChordDef *chord);

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */

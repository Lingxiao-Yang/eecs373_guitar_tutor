/*
* Copyright 2023 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/


/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"
#include "led_control.h"
#include "audio_manager.h"
/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**
 * Create a demo application
 */

#define DOT_SIZE 20
#define DOT_OFFSET 0

const int FRET_X[6] = {80, 144, 203, 258, 310, 360};

const int STRING_Y[6] = {124, 153, 183, 211, 240, 270};

ChordDef chord_C = {
	.name = "C",
    .led_indices = {40, 33, 25}, .led_count = 3,
    .notes = {{2, 1}, {4, 2}, {5, 3}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_C
};

ChordDef chord_Am = {
	.name = "Am",
    .led_indices = {40, 33, 32}, .led_count = 3,
    .notes = {{2, 1}, {3, 2}, {4, 2}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_Am
};

ChordDef chord_Em = {
	.name = "Em",
    .led_indices = {32, 31}, .led_count = 2,
    .notes = {{4, 2}, {5, 2}}, .note_count = 2, .barre_fret = 0,
	.audio_info = (void *)&Chord_Em
};

ChordDef chord_G = {
	.name = "G",
    .led_indices = {41, 35, 34, 25, 24}, .led_count = 5,
    .notes = {{1, 3}, {5, 2}, {6, 3}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_G
};

ChordDef chord_Dm = {
	.name = "Dm",
    .led_indices = {41, 34, 33}, .led_count = 3,
    .notes = {{1, 1}, {2, 3}, {3, 2}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_Dm
};

ChordDef chord_F = {
		.name = "F",
    .led_indices = {41, 40, 39, 38, 37, 36, 32, 26, 25}, .led_count = 9,
    .notes = {{3, 2}, {4, 3}, {5, 3}}, .note_count = 3,
    .barre_fret = 1, .barre_start_string = 1, .barre_end_string = 6,
	.audio_info = (void *)&Chord_F
};

// ==================== 第二组：D, A, E, F#m, Bm, G#m ====================

ChordDef chord_D = {
		.name = "D",
    .led_indices = {35, 28, 33}, .led_count = 3,
    .notes = {{1, 2}, {2, 3}, {3, 2}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_D
};

ChordDef chord_A = {
		.name = "A",
    .led_indices = {34, 33, 32}, .led_count = 3,
    .notes = {{2, 2}, {3, 2}, {4, 2}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_A
};

ChordDef chord_E = {
		.name = "E",
    .led_indices = {39, 32, 31}, .led_count = 3,
    .notes = {{3, 1}, {4, 2}, {5, 2}}, .note_count = 3, .barre_fret = 0,
	.audio_info = (void *)&Chord_E
};

ChordDef chord_Fsm = { // F#m
		.name = "F#m",
    .led_indices = {35, 34, 33, 32, 31, 30, 19, 18}, .led_count = 8,
    .notes = {{4, 4}, {5, 4}}, .note_count = 2,
    .barre_fret = 2, .barre_start_string = 1, .barre_end_string = 6,
	.audio_info = (void *)&Chord_FSM
};

ChordDef chord_Bm = { // Bm
		.name = "Bm",
    .led_indices = {35, 34, 33, 32, 31, 27, 20, 19}, .led_count = 8,
    .notes = {{2, 3}, {3, 4}, {4, 4}}, .note_count = 3,
    .barre_fret = 2, .barre_start_string = 1, .barre_end_string = 5,
	.audio_info = (void *)&Chord_Bm
};

ChordDef chord_Gsm = { // G#m
		.name = "G#m",
    .led_indices = {23, 22, 21, 20, 19, 18, 7, 6}, .led_count = 8,
    .notes = {{4, 6}, {5, 6}}, .note_count = 2,
    .barre_fret = 4, .barre_start_string = 1, .barre_end_string = 6,
	.audio_info = (void *)&Chord_GSM
};

// ==================== 第三组：B, Gm, C#m, Bb, F# ====================

ChordDef chord_B = {
		.name = "B",
    .led_indices = {35, 34, 33, 32, 31, 21, 20, 19}, .led_count = 8,
    .notes = {{2, 4}, {3, 4}, {4, 4}}, .note_count = 3,
    .barre_fret = 2, .barre_start_string = 1, .barre_end_string = 5,
	.audio_info = (void *)&Chord_B
};

ChordDef chord_Gm = {
		.name = "Gm",
    .led_indices = {29, 28, 27, 26, 25, 24, 13, 12}, .led_count = 8,
    .notes = {{4, 5}, {5, 5}}, .note_count = 2,
    .barre_fret = 3, .barre_start_string = 1, .barre_end_string = 6,
	.audio_info = (void *)&Chord_Gm
};

ChordDef chord_Csm = { // C#m
		.name = "C#m",
    .led_indices = {23, 22, 21, 20, 19, 14, 7, 6}, .led_count = 8,
    .notes = {{2, 5}, {3, 6}, {4, 6}}, .note_count = 3,
    .barre_fret = 4, .barre_start_string = 1, .barre_end_string = 5,
	.audio_info = (void *)&Chord_CSM
};

ChordDef chord_Bb = {
		.name = "Bb",
    .led_indices = {41, 40, 39, 38, 37, 27, 26, 25}, .led_count = 8,
    .notes = {{2, 3}, {3, 3}, {4, 3}}, .note_count = 3,
    .barre_fret = 1, .barre_start_string = 1, .barre_end_string = 5,
	.audio_info = (void *)&Chord_Bb
};

ChordDef chord_Fs = { // F# (Major)
		.name = "F#",
    .led_indices = {35, 34, 33, 32, 31, 30, 27, 20, 19}, .led_count = 9,
    .notes = {{3, 3}, {4, 4}, {5, 4}}, .note_count = 3,
    .barre_fret = 2, .barre_start_string = 1, .barre_end_string = 6,
	.audio_info = (void *)&Chord_FS
};



ChordDef* const chord_group_1[] = { &chord_C, &chord_Am, &chord_Em, &chord_G, &chord_Dm, &chord_F };

ChordDef* const chord_group_2[] = { &chord_D, &chord_A, &chord_E, &chord_Fsm, &chord_Bm, &chord_Gsm};

ChordDef* const chord_group_3[] = { &chord_B, &chord_Gm, &chord_Csm, &chord_Bb, &chord_Fs};

ChordDef** all_chord_groups[] = { chord_group_1, chord_group_2, chord_group_3 };

const int chord_group_counts[] = { 6, 6, 5 };

void show_chord(ChordDef *chord) {
    lv_obj_t *dots[4] = {
        guider_ui.screen_chord_demo_dot_1,
        guider_ui.screen_chord_demo_dot_2,
        guider_ui.screen_chord_demo_dot_3,
        guider_ui.screen_chord_demo_dot_4
    };
    lv_obj_t *barre_obj = guider_ui.screen_chord_demo_barre_obj;
    for(int i = 0; i < 4; i++) {
        lv_obj_add_flag(dots[i], LV_OBJ_FLAG_HIDDEN);
    }
    lv_obj_add_flag(barre_obj, LV_OBJ_FLAG_HIDDEN);
    for(int i = 0; i < chord->note_count; i++) {
        uint8_t s = chord->notes[i].string;
        uint8_t f = chord->notes[i].fret;
        if(s >= 1 && s <= 6 && f >= 1 && f <= 6) {
            int target_x = FRET_X[f - 1] - DOT_OFFSET;
            int target_y = STRING_Y[s - 1] - DOT_OFFSET;
            lv_obj_set_pos(dots[i], target_x, target_y);
            lv_obj_clear_flag(dots[i], LV_OBJ_FLAG_HIDDEN);
        }
    }

    if(chord->barre_fret > 0 && chord->barre_fret <= 6) {
         int f = chord->barre_fret;
         int s_start = chord->barre_start_string;
         int s_end = chord->barre_end_string;

         int top_y = STRING_Y[s_start - 1];
         int bottom_y = STRING_Y[s_end - 1];
         int barre_height = bottom_y - top_y + DOT_SIZE;
         int target_x = FRET_X[f - 1] - DOT_OFFSET;
         int target_y = top_y - DOT_OFFSET;
         lv_obj_set_size(barre_obj, DOT_SIZE, barre_height);

         lv_obj_set_pos(barre_obj, target_x, target_y);
         lv_obj_clear_flag(barre_obj, LV_OBJ_FLAG_HIDDEN);
     }

    DotStar_ClearAll();
    for(int i = 0; i < chord->led_count; i++) {
        SetPixelColor(chord->led_indices[i], 0, 128, 255); // 设为蓝色
    }
    DotStar_Update();

}

void custom_init(lv_ui *ui)
{
    /* Add your codes here */
}


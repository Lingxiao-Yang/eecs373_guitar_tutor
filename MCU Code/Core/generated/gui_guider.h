/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

typedef struct
{
  
	lv_obj_t *screen_logo;
	bool screen_logo_del;
	lv_obj_t *screen_logo_label_logo;
	lv_obj_t *screen_logo_label_guide;
	lv_obj_t *screen_menu;
	bool screen_menu_del;
	lv_obj_t *screen_menu_label_MENU;
	lv_obj_t *screen_menu_label_1;
	lv_obj_t *screen_menu_btn_1;
	lv_obj_t *screen_menu_btn_1_label;
	lv_obj_t *screen_menu_btn_2;
	lv_obj_t *screen_menu_btn_2_label;
	lv_obj_t *screen_set_choose;
	bool screen_set_choose_del;
	lv_obj_t *screen_set_choose_btn_1;
	lv_obj_t *screen_set_choose_btn_1_label;
	lv_obj_t *screen_set_choose_label_1;
	lv_obj_t *screen_set_choose_btn_2;
	lv_obj_t *screen_set_choose_btn_2_label;
	lv_obj_t *screen_set_choose_btn_3;
	lv_obj_t *screen_set_choose_btn_3_label;
	lv_obj_t *screen_set_choose_btn_4;
	lv_obj_t *screen_set_choose_btn_4_label;
	lv_obj_t *screen_set_choose_btn_5;
	lv_obj_t *screen_set_choose_btn_5_label;
	lv_obj_t *screen_chord_demo;
	bool screen_chord_demo_del;
	lv_obj_t *screen_chord_demo_img_1;
	lv_obj_t *screen_chord_demo_dot_1;
	lv_obj_t *screen_chord_demo_dot_2;
	lv_obj_t *screen_chord_demo_dot_3;
	lv_obj_t *screen_chord_demo_dot_4;
	lv_obj_t *screen_chord_demo_barre_obj;
	lv_obj_t *screen_chord_demo_label_play_pause;
	lv_obj_t *screen_chord_demo_label_play_pause_label;
	lv_obj_t *screen_chord_demo_label_prev;
	lv_obj_t *screen_chord_demo_label_prev_label;
	lv_obj_t *screen_chord_demo_label_next;
	lv_obj_t *screen_chord_demo_label_next_label;
	lv_obj_t *screen_chord_demo_label_sound;
	lv_obj_t *screen_chord_demo_label_sound_label;
	lv_obj_t *screen_chord_demo_label_close;
	lv_obj_t *screen_chord_demo_label_close_label;
	lv_obj_t *screen_chord_demo_btn_test;
	lv_obj_t *screen_chord_demo_btn_test_label;
	lv_obj_t *screen_chord_demo_label_chord_name;
	lv_obj_t *screen_chord_demo_label_chord_name_label;
	lv_obj_t *screen_chord_demo_cont_result;
	lv_obj_t *screen_chord_demo_label_chord;
	lv_obj_t *screen_chord_demo_label_score;
	lv_obj_t *screen_chord_demo_img_good;
	lv_obj_t *screen_chord_demo_img_awful;
	lv_obj_t *screen_chord_demo_img_awesome;
}lv_ui;

typedef void (*ui_setup_scr_t)(lv_ui * ui);

void ui_init_style(lv_style_t * style);

void ui_load_scr_animation(lv_ui *ui, lv_obj_t ** new_scr, bool new_scr_del, bool * old_scr_del, ui_setup_scr_t setup_scr,
                           lv_scr_load_anim_t anim_type, uint32_t time, uint32_t delay, bool is_clean, bool auto_del);

void ui_animation(void * var, int32_t duration, int32_t delay, int32_t start_value, int32_t end_value, lv_anim_path_cb_t path_cb,
                       uint16_t repeat_cnt, uint32_t repeat_delay, uint32_t playback_time, uint32_t playback_delay,
                       lv_anim_exec_xcb_t exec_cb, lv_anim_start_cb_t start_cb, lv_anim_ready_cb_t ready_cb, lv_anim_deleted_cb_t deleted_cb);


void init_scr_del_flag(lv_ui *ui);

void setup_ui(lv_ui *ui);

void init_keyboard(lv_ui *ui);

extern lv_ui guider_ui;


void setup_scr_screen_logo(lv_ui *ui);
void setup_scr_screen_menu(lv_ui *ui);
void setup_scr_screen_set_choose(lv_ui *ui);
void setup_scr_screen_chord_demo(lv_ui *ui);
LV_IMG_DECLARE(_guitar_sized_alpha_480x320);
LV_IMG_DECLARE(_Good_alpha_100x100);
LV_IMG_DECLARE(_Awful_alpha_100x100);
LV_IMG_DECLARE(_Awesome_alpha_100x100);

LV_FONT_DECLARE(lv_font_ArchitectsDaughter_30)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_18)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_22)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_16)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_20)
LV_FONT_DECLARE(lv_font_ArchitectsDaughter_26)
LV_FONT_DECLARE(lv_font_montserratMedium_16)
LV_FONT_DECLARE(lv_font_montserratMedium_20)
LV_FONT_DECLARE(lv_font_montserratMedium_24)
LV_FONT_DECLARE(lv_font_montserratMedium_22)


#ifdef __cplusplus
}
#endif
#endif

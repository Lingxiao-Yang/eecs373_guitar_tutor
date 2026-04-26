/*
* Copyright 2026 NXP
* NXP Proprietary. This software is owned or controlled by NXP and may only be used strictly in
* accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
* activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
* terms, then you may not retain, install, activate or otherwise use the software.
*/

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "widgets_init.h"
#include "custom.h"



void setup_scr_screen_chord_demo(lv_ui *ui)
{
    //Write codes screen_chord_demo
    ui->screen_chord_demo = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_chord_demo, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_chord_demo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_img_1
    ui->screen_chord_demo_img_1 = lv_img_create(ui->screen_chord_demo);
    lv_obj_add_flag(ui->screen_chord_demo_img_1, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_chord_demo_img_1, &_guitar_sized_alpha_480x320);
    lv_img_set_pivot(ui->screen_chord_demo_img_1, 50,50);
    lv_img_set_angle(ui->screen_chord_demo_img_1, 0);
    lv_obj_set_pos(ui->screen_chord_demo_img_1, 0, 0);
    lv_obj_set_size(ui->screen_chord_demo_img_1, 480, 320);

    //Write style for screen_chord_demo_img_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_chord_demo_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_chord_demo_img_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_img_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_chord_demo_img_1, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_dot_1
    ui->screen_chord_demo_dot_1 = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_dot_1, 529, 25);
    lv_obj_set_size(ui->screen_chord_demo_dot_1, 20, 20);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_dot_1, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_dot_1, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_dot_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_dot_1, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_dot_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_dot_1, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_dot_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_dot_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_dot_2
    ui->screen_chord_demo_dot_2 = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_dot_2, 529, 81);
    lv_obj_set_size(ui->screen_chord_demo_dot_2, 20, 20);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_dot_2, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_dot_2, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_dot_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_dot_2, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_dot_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_dot_2, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_dot_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_dot_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_dot_3
    ui->screen_chord_demo_dot_3 = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_dot_3, 529, 123);
    lv_obj_set_size(ui->screen_chord_demo_dot_3, 20, 20);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_dot_3, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_dot_3, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_dot_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_dot_3, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_dot_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_dot_3, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_dot_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_dot_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_dot_4
    ui->screen_chord_demo_dot_4 = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_dot_4, 529, 158);
    lv_obj_set_size(ui->screen_chord_demo_dot_4, 20, 20);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_dot_4, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_dot_4, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_dot_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_dot_4, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_dot_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_dot_4, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_dot_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_dot_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_barre_obj
    ui->screen_chord_demo_barre_obj = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_barre_obj, 529, 203);
    lv_obj_set_size(ui->screen_chord_demo_barre_obj, 20, 55);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_barre_obj, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_barre_obj, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_barre_obj, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_barre_obj, 10, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_barre_obj, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_barre_obj, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_barre_obj, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_barre_obj, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_label_play_pause
    ui->screen_chord_demo_label_play_pause = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_play_pause_label = lv_label_create(ui->screen_chord_demo_label_play_pause);
    lv_label_set_text(ui->screen_chord_demo_label_play_pause_label, " " LV_SYMBOL_PLAY " ");
    lv_label_set_long_mode(ui->screen_chord_demo_label_play_pause_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_play_pause_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_play_pause, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_play_pause_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_play_pause, 100, 50);
    lv_obj_set_size(ui->screen_chord_demo_label_play_pause, 35, 35);

    //Write style for screen_chord_demo_label_play_pause, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_play_pause, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_play_pause, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_play_pause, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_play_pause, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_play_pause, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_play_pause, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_play_pause, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_play_pause, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_play_pause, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_play_pause, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_play_pause, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_play_pause, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_play_pause, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_play_pause, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_play_pause, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_play_pause, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_play_pause, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_play_pause, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_play_pause, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_play_pause, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_play_pause, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_play_pause, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_play_pause, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_chord_demo_label_prev
    ui->screen_chord_demo_label_prev = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_prev_label = lv_label_create(ui->screen_chord_demo_label_prev);
    lv_label_set_text(ui->screen_chord_demo_label_prev_label, "" LV_SYMBOL_PREV "");
    lv_label_set_long_mode(ui->screen_chord_demo_label_prev_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_prev_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_prev, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_prev_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_prev, 45, 50);
    lv_obj_set_size(ui->screen_chord_demo_label_prev, 35, 35);

    //Write style for screen_chord_demo_label_prev, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_prev, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_prev, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_prev, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_prev, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_prev, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_prev, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_prev, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_prev, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_prev, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_prev, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_prev, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_prev, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_chord_demo_label_prev, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_prev, lv_color_hex(0x535353), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_prev, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_prev, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_prev, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_prev, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_prev, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_prev, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_prev, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_chord_demo_label_next
    ui->screen_chord_demo_label_next = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_next_label = lv_label_create(ui->screen_chord_demo_label_next);
    lv_label_set_text(ui->screen_chord_demo_label_next_label, "" LV_SYMBOL_NEXT "");
    lv_label_set_long_mode(ui->screen_chord_demo_label_next_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_next_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_next, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_next_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_next, 155, 50);
    lv_obj_set_size(ui->screen_chord_demo_label_next, 35, 35);

    //Write style for screen_chord_demo_label_next, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_next, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_next, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_next, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_next, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_next, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_next, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_next, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_next, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_next, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_chord_demo_label_next, Part: LV_PART_MAIN, State: LV_STATE_DISABLED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_next, lv_color_hex(0x535353), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_next, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_next, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_next, 5, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_next, 0, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_next, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_next, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DISABLED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_next, 255, LV_PART_MAIN|LV_STATE_DISABLED);

    //Write codes screen_chord_demo_label_sound
    ui->screen_chord_demo_label_sound = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_sound_label = lv_label_create(ui->screen_chord_demo_label_sound);
    lv_label_set_text(ui->screen_chord_demo_label_sound_label, " " LV_SYMBOL_AUDIO " ");
    lv_label_set_long_mode(ui->screen_chord_demo_label_sound_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_sound_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_sound, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_sound_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_sound, 439, 8);
    lv_obj_set_size(ui->screen_chord_demo_label_sound, 35, 35);

    //Write style for screen_chord_demo_label_sound, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_sound, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_sound, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_sound, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_sound, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_sound, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_sound, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_sound, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_sound, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_sound, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_sound, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_sound, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_sound, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_sound, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_sound, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_sound, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_sound, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_sound, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_sound, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_sound, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_sound, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_sound, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_sound, &lv_font_montserratMedium_20, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_sound, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_chord_demo_label_close
    ui->screen_chord_demo_label_close = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_close_label = lv_label_create(ui->screen_chord_demo_label_close);
    lv_label_set_text(ui->screen_chord_demo_label_close_label, " " LV_SYMBOL_CLOSE " ");
    lv_label_set_long_mode(ui->screen_chord_demo_label_close_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_close_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_close, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_close_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_close, 5, 8);
    lv_obj_set_size(ui->screen_chord_demo_label_close, 35, 35);

    //Write style for screen_chord_demo_label_close, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_close, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_close, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_close, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_close, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_close, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_close, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_close, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_close, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_close, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_close, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_close, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_close, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_close, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_close, &lv_font_montserratMedium_24, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_close, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_chord_demo_btn_test
    ui->screen_chord_demo_btn_test = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_btn_test_label = lv_label_create(ui->screen_chord_demo_btn_test);
    lv_label_set_text(ui->screen_chord_demo_btn_test_label, "test");
    lv_label_set_long_mode(ui->screen_chord_demo_btn_test_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_btn_test_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_btn_test, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_btn_test_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_btn_test, 185, 8);
    lv_obj_set_size(ui->screen_chord_demo_btn_test, 60, 35);

    //Write style for screen_chord_demo_btn_test, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_btn_test, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_btn_test, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_btn_test, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_btn_test, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_btn_test, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_btn_test, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_btn_test, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_btn_test, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_btn_test, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_btn_test, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_btn_test, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_btn_test, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_btn_test, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_btn_test, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write style for screen_chord_demo_btn_test, Part: LV_PART_MAIN, State: LV_STATE_PRESSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_btn_test, lv_color_hex(0xf00000), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_btn_test, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_btn_test, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_btn_test, 5, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_btn_test, 0, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_btn_test, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_btn_test, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_PRESSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_btn_test, 255, LV_PART_MAIN|LV_STATE_PRESSED);

    //Write codes screen_chord_demo_label_chord_name
    ui->screen_chord_demo_label_chord_name = lv_btn_create(ui->screen_chord_demo);
    ui->screen_chord_demo_label_chord_name_label = lv_label_create(ui->screen_chord_demo_label_chord_name);
    lv_label_set_text(ui->screen_chord_demo_label_chord_name_label, "C");
    lv_label_set_long_mode(ui->screen_chord_demo_label_chord_name_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_chord_demo_label_chord_name_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_chord_demo_label_chord_name, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_chord_demo_label_chord_name_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_chord_demo_label_chord_name, 67, 8);
    lv_obj_set_size(ui->screen_chord_demo_label_chord_name, 100, 35);

    //Write style for screen_chord_demo_label_chord_name, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_chord_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_chord_name, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_chord_name, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_chord_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_chord_name, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_chord_name, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_chord_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_chord_name, &lv_font_montserratMedium_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_chord_name, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_chord_name, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_chord_demo_label_chord_name, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_chord_name, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_label_chord_name, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_label_chord_name, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_chord_name, 2, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_label_chord_name, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_color(ui->screen_chord_demo_label_chord_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_side(ui->screen_chord_demo_label_chord_name, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_chord_name, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_chord_name, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_chord_name, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_chord_name, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_chord_name, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_chord_demo_cont_result
    ui->screen_chord_demo_cont_result = lv_obj_create(ui->screen_chord_demo);
    lv_obj_set_pos(ui->screen_chord_demo_cont_result, 140, 60);
    lv_obj_set_size(ui->screen_chord_demo_cont_result, 200, 200);
    lv_obj_set_scrollbar_mode(ui->screen_chord_demo_cont_result, LV_SCROLLBAR_MODE_OFF);
    lv_obj_add_flag(ui->screen_chord_demo_cont_result, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_cont_result, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_cont_result, 2, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui->screen_chord_demo_cont_result, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui->screen_chord_demo_cont_result, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui->screen_chord_demo_cont_result, LV_BORDER_SIDE_FULL, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_cont_result, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_chord_demo_cont_result, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_chord_demo_cont_result, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_cont_result, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_label_chord
    ui->screen_chord_demo_label_chord = lv_label_create(ui->screen_chord_demo_cont_result);
    lv_label_set_text(ui->screen_chord_demo_label_chord, "Detected Chord: C");
    lv_label_set_long_mode(ui->screen_chord_demo_label_chord, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_chord_demo_label_chord, 10, 135);
    lv_obj_set_size(ui->screen_chord_demo_label_chord, 180, 20);
    lv_obj_add_flag(ui->screen_chord_demo_label_chord, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_label_chord, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_chord, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_chord, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_chord, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_chord, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_chord, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_label_score
    ui->screen_chord_demo_label_score = lv_label_create(ui->screen_chord_demo_cont_result);
    lv_label_set_text(ui->screen_chord_demo_label_score, "Score: 96");
    lv_label_set_long_mode(ui->screen_chord_demo_label_score, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_chord_demo_label_score, 9, 170);
    lv_obj_set_size(ui->screen_chord_demo_label_score, 180, 20);
    lv_obj_add_flag(ui->screen_chord_demo_label_score, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_label_score, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_chord_demo_label_score, lv_color_hex(0x000000), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_chord_demo_label_score, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_chord_demo_label_score, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_chord_demo_label_score, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_chord_demo_label_score, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_img_good
    ui->screen_chord_demo_img_good = lv_img_create(ui->screen_chord_demo_cont_result);
    lv_obj_add_flag(ui->screen_chord_demo_img_good, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_chord_demo_img_good, &_Good_alpha_100x100);
    lv_img_set_pivot(ui->screen_chord_demo_img_good, 50,50);
    lv_img_set_angle(ui->screen_chord_demo_img_good, 0);
    lv_obj_set_pos(ui->screen_chord_demo_img_good, 50, 20);
    lv_obj_set_size(ui->screen_chord_demo_img_good, 100, 100);
    lv_obj_add_flag(ui->screen_chord_demo_img_good, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_img_good, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_chord_demo_img_good, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_chord_demo_img_good, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_img_good, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_chord_demo_img_good, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_img_awful
    ui->screen_chord_demo_img_awful = lv_img_create(ui->screen_chord_demo_cont_result);
    lv_obj_add_flag(ui->screen_chord_demo_img_awful, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_chord_demo_img_awful, &_Awful_alpha_100x100);
    lv_img_set_pivot(ui->screen_chord_demo_img_awful, 50,50);
    lv_img_set_angle(ui->screen_chord_demo_img_awful, 0);
    lv_obj_set_pos(ui->screen_chord_demo_img_awful, 50, 20);
    lv_obj_set_size(ui->screen_chord_demo_img_awful, 100, 100);
    lv_obj_add_flag(ui->screen_chord_demo_img_awful, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_img_awful, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_chord_demo_img_awful, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_chord_demo_img_awful, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_img_awful, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_chord_demo_img_awful, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_chord_demo_img_awesome
    ui->screen_chord_demo_img_awesome = lv_img_create(ui->screen_chord_demo_cont_result);
    lv_obj_add_flag(ui->screen_chord_demo_img_awesome, LV_OBJ_FLAG_CLICKABLE);
    lv_img_set_src(ui->screen_chord_demo_img_awesome, &_Awesome_alpha_100x100);
    lv_img_set_pivot(ui->screen_chord_demo_img_awesome, 50,50);
    lv_img_set_angle(ui->screen_chord_demo_img_awesome, 0);
    lv_obj_set_pos(ui->screen_chord_demo_img_awesome, 50, 20);
    lv_obj_set_size(ui->screen_chord_demo_img_awesome, 100, 100);
    lv_obj_add_flag(ui->screen_chord_demo_img_awesome, LV_OBJ_FLAG_HIDDEN);

    //Write style for screen_chord_demo_img_awesome, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_img_recolor_opa(ui->screen_chord_demo_img_awesome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_img_opa(ui->screen_chord_demo_img_awesome, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_chord_demo_img_awesome, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_clip_corner(ui->screen_chord_demo_img_awesome, true, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_chord_demo.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_chord_demo);

}

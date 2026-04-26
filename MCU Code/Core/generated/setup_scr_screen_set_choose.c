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



void setup_scr_screen_set_choose(lv_ui *ui)
{
    //Write codes screen_set_choose
    ui->screen_set_choose = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_set_choose, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_set_choose, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_set_choose, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_choose_btn_1
    ui->screen_set_choose_btn_1 = lv_btn_create(ui->screen_set_choose);
    ui->screen_set_choose_btn_1_label = lv_label_create(ui->screen_set_choose_btn_1);
    lv_label_set_text(ui->screen_set_choose_btn_1_label, "Set 1\n");
    lv_label_set_long_mode(ui->screen_set_choose_btn_1_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_choose_btn_1_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_choose_btn_1, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_choose_btn_1_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_choose_btn_1, 80, 50);
    lv_obj_set_size(ui->screen_set_choose_btn_1, 120, 60);

    //Write style for screen_set_choose_btn_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_1, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_1, 16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_1, &lv_font_ArchitectsDaughter_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_btn_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_choose_btn_1, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_1, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_1, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_1, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_1, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_1, lv_color_hex(0xfff700), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_1, &lv_font_ArchitectsDaughter_26, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_1, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_set_choose_label_1
    ui->screen_set_choose_label_1 = lv_label_create(ui->screen_set_choose);
    lv_label_set_text(ui->screen_set_choose_label_1, "Press 'B'/'C' to go next/prev\n\nPress 'D' to enter");
    lv_label_set_long_mode(ui->screen_set_choose_label_1, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_set_choose_label_1, 200, 269);
    lv_obj_set_size(ui->screen_set_choose_label_1, 277, 48);

    //Write style for screen_set_choose_label_1, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_label_1, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_label_1, &lv_font_ArchitectsDaughter_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_label_1, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_label_1, LV_TEXT_ALIGN_RIGHT, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_label_1, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_set_choose_btn_2
    ui->screen_set_choose_btn_2 = lv_btn_create(ui->screen_set_choose);
    ui->screen_set_choose_btn_2_label = lv_label_create(ui->screen_set_choose_btn_2);
    lv_label_set_text(ui->screen_set_choose_btn_2_label, "Set 2\n");
    lv_label_set_long_mode(ui->screen_set_choose_btn_2_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_choose_btn_2_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_choose_btn_2, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_choose_btn_2_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_choose_btn_2, 280, 50);
    lv_obj_set_size(ui->screen_set_choose_btn_2, 120, 60);

    //Write style for screen_set_choose_btn_2, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_2, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_2, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_2, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_2, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_2, &lv_font_ArchitectsDaughter_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_2, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_btn_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_choose_btn_2, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_2, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_2, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_2, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_2, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_2, lv_color_hex(0xfff700), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_2, &lv_font_ArchitectsDaughter_26, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_2, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_set_choose_btn_3
    ui->screen_set_choose_btn_3 = lv_btn_create(ui->screen_set_choose);
    ui->screen_set_choose_btn_3_label = lv_label_create(ui->screen_set_choose_btn_3);
    lv_label_set_text(ui->screen_set_choose_btn_3_label, "Set 3\n");
    lv_label_set_long_mode(ui->screen_set_choose_btn_3_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_choose_btn_3_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_choose_btn_3, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_choose_btn_3_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_choose_btn_3, 80, 155);
    lv_obj_set_size(ui->screen_set_choose_btn_3, 120, 60);

    //Write style for screen_set_choose_btn_3, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_3, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_3, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_3, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_3, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_3, &lv_font_ArchitectsDaughter_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_3, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_btn_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_choose_btn_3, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_3, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_3, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_3, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_3, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_3, lv_color_hex(0xfff700), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_3, &lv_font_ArchitectsDaughter_26, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_3, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_set_choose_btn_4
    ui->screen_set_choose_btn_4 = lv_btn_create(ui->screen_set_choose);
    ui->screen_set_choose_btn_4_label = lv_label_create(ui->screen_set_choose_btn_4);
    lv_label_set_text(ui->screen_set_choose_btn_4_label, "Exit\n");
    lv_label_set_long_mode(ui->screen_set_choose_btn_4_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_choose_btn_4_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_choose_btn_4, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_choose_btn_4_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_choose_btn_4, 280, 155);
    lv_obj_set_size(ui->screen_set_choose_btn_4, 120, 60);

    //Write style for screen_set_choose_btn_4, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_4, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_4, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_4, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_4, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_4, &lv_font_ArchitectsDaughter_22, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_4, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_btn_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write style for screen_set_choose_btn_4, Part: LV_PART_MAIN, State: LV_STATE_FOCUSED.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_4, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_4, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_4, 5, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_4, 0, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_4, lv_color_hex(0xfff700), LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_4, &lv_font_ArchitectsDaughter_26, LV_PART_MAIN|LV_STATE_FOCUSED);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_4, 255, LV_PART_MAIN|LV_STATE_FOCUSED);

    //Write codes screen_set_choose_btn_5
    ui->screen_set_choose_btn_5 = lv_btn_create(ui->screen_set_choose);
    ui->screen_set_choose_btn_5_label = lv_label_create(ui->screen_set_choose_btn_5);
    lv_label_set_text(ui->screen_set_choose_btn_5_label, "Button");
    lv_label_set_long_mode(ui->screen_set_choose_btn_5_label, LV_LABEL_LONG_WRAP);
    lv_obj_align(ui->screen_set_choose_btn_5_label, LV_ALIGN_CENTER, 0, 0);
    lv_obj_set_style_pad_all(ui->screen_set_choose_btn_5, 0, LV_STATE_DEFAULT);
    lv_obj_set_width(ui->screen_set_choose_btn_5_label, LV_PCT(100));
    lv_obj_set_pos(ui->screen_set_choose_btn_5, 587, -101);
    lv_obj_set_size(ui->screen_set_choose_btn_5, 100, 50);

    //Write style for screen_set_choose_btn_5, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_set_choose_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_set_choose_btn_5, lv_color_hex(0x2195f6), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_set_choose_btn_5, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui->screen_set_choose_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_set_choose_btn_5, 5, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_set_choose_btn_5, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_set_choose_btn_5, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_set_choose_btn_5, &lv_font_montserratMedium_16, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_set_choose_btn_5, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_set_choose_btn_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_set_choose.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_set_choose);

}

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



void setup_scr_screen_logo(lv_ui *ui)
{
    //Write codes screen_logo
    ui->screen_logo = lv_obj_create(NULL);
    lv_obj_set_size(ui->screen_logo, 480, 320);
    lv_obj_set_scrollbar_mode(ui->screen_logo, LV_SCROLLBAR_MODE_OFF);

    //Write style for screen_logo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_bg_opa(ui->screen_logo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui->screen_logo, lv_color_hex(0x2b2b58), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui->screen_logo, LV_GRAD_DIR_NONE, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_logo_label_logo
    ui->screen_logo_label_logo = lv_label_create(ui->screen_logo);
    lv_label_set_text(ui->screen_logo_label_logo, "Guitar Tutor");
    lv_label_set_long_mode(ui->screen_logo_label_logo, LV_LABEL_LONG_CLIP);
    lv_obj_set_pos(ui->screen_logo_label_logo, 121, 90);
    lv_obj_set_size(ui->screen_logo_label_logo, 237, 32);

    //Write style for screen_logo_label_logo, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_logo_label_logo, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_logo_label_logo, &lv_font_ArchitectsDaughter_30, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_logo_label_logo, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_logo_label_logo, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_logo_label_logo, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //Write codes screen_logo_label_guide
    ui->screen_logo_label_guide = lv_label_create(ui->screen_logo);
    lv_label_set_text(ui->screen_logo_label_guide, "Press ‘D’ to enter");
    lv_label_set_long_mode(ui->screen_logo_label_guide, LV_LABEL_LONG_WRAP);
    lv_obj_set_pos(ui->screen_logo_label_guide, 138, 232);
    lv_obj_set_size(ui->screen_logo_label_guide, 203, 36);

    //Write style for screen_logo_label_guide, Part: LV_PART_MAIN, State: LV_STATE_DEFAULT.
    lv_obj_set_style_border_width(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_radius(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui->screen_logo_label_guide, lv_color_hex(0xffffff), LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui->screen_logo_label_guide, &lv_font_ArchitectsDaughter_18, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui->screen_logo_label_guide, 255, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_letter_space(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_line_space(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui->screen_logo_label_guide, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui->screen_logo_label_guide, 0, LV_PART_MAIN|LV_STATE_DEFAULT);

    //The custom code of screen_logo.


    //Update current screen layout.
    lv_obj_update_layout(ui->screen_logo);

}

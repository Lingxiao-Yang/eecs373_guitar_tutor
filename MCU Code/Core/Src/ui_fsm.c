/*
 * ui_fsm.c
 *
 *  Created on: Mar 24, 2026
 *      Author: syoshino
 */


#include "ui_fsm.h"
#include "keypad.h"
#include "custom.h"
#include "lcd.h"
#include "GUI.h"
#include "gui_guider.h"
#include "events_init.h"
#include "led_control.h"
#include "audio_manager.h"
#include "chord_recognizer.h"
#include <stdio.h>
lv_ui guider_ui;
UI_Manager_t ui;
uint8_t global_cursor = 0;
uint8_t is_playing = 0;
static uint8_t saved_set_index = 0;
static uint8_t current_chord = 0;
static lv_obj_t * set_btns[4];
static lv_obj_t * demo_btns[5];
static uint8_t is_pop_open = 0;
static uint8_t is_test = 0;


// Initialization
void UI_Init(void){
	ui.currentState = UI_STATE_LOGO;
	ui.prevState = UI_STATE_LOGO;
	ui.stateJustChanged = 1;
	setup_ui(&guider_ui);
}

// Helper Function
void UI_ChangeState(UI_State_t newState){
	if (ui.currentState == newState) return;
	ui.prevState = ui.currentState;
	ui.currentState = newState;
	ui.stateJustChanged = 1;
	current_chord = 0;
	if (newState == UI_STATE_CHORD && ui.prevState == UI_STATE_CHORD_DISPLAY){
		global_cursor = saved_set_index;
	}else{
		global_cursor = 0;
	}

}

void Toggle_Play_Pause(void) {
	ChordDef * current = all_chord_groups[saved_set_index][current_chord];
    lv_obj_t * btn_label = lv_obj_get_child(guider_ui.screen_chord_demo_label_play_pause, 0);
    if (is_playing) {
        is_playing = 0;
        lv_label_set_text(btn_label, LV_SYMBOL_PLAY);
        Audio_Stop();
    } else {
        is_playing = 1;
        lv_label_set_text(btn_label, LV_SYMBOL_PAUSE);
        Audio_Play_Chord((Chord_Info *)current->audio_info);
    }
}

// Logo Start
void UI_Draw_Logo(void){
	setup_scr_screen_logo(&guider_ui);
	lv_scr_load(guider_ui.screen_logo);
	ui.stateJustChanged = 0;
}

// Logo End

// Menu Start
void UI_Update_Menu_Focus(void){
	lv_obj_clear_state(guider_ui.screen_menu_btn_1, LV_STATE_FOCUSED);
	lv_obj_clear_state(guider_ui.screen_menu_btn_2, LV_STATE_FOCUSED);
	if (global_cursor == 0){
		lv_obj_add_state(guider_ui.screen_menu_btn_1, LV_STATE_FOCUSED);
	} else if (global_cursor == 1){
		lv_obj_add_state(guider_ui.screen_menu_btn_2, LV_STATE_FOCUSED);
	}
}

void UI_Draw_Menu(void){
	setup_scr_screen_menu(&guider_ui);
	lv_scr_load_anim(guider_ui.screen_menu, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	ui.stateJustChanged = 0;
	UI_Update_Menu_Focus();
}

static void UI_Menu_ProcessInput(char key){
    if (key == '\0') return;

    if (key == 'B') {
        global_cursor = (global_cursor + 1) % 2;
        UI_Update_Menu_Focus();
    }
    else if (key == 'C') {
        global_cursor = (global_cursor + 1) % 2;
        UI_Update_Menu_Focus();
    }
    else if (key == 'D') {
        if (global_cursor == 0){
            UI_ChangeState(UI_STATE_CHORD);
        }else{
            UI_ChangeState(UI_STATE_LOGO);
        }
    }
}
// Menu End


// Chord Set Choose Start
void UI_Update_Set_Choose_Focus(void){
	for (int i = 0; i < 4; i++){
		if (i == global_cursor){
			lv_obj_add_state(set_btns[i], LV_STATE_FOCUSED);
		}else{
			lv_obj_clear_state(set_btns[i], LV_STATE_FOCUSED);
		}
	}
}

void UI_Draw_Set_Choose(void){
	setup_scr_screen_set_choose(&guider_ui);
	lv_scr_load_anim(guider_ui.screen_set_choose, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	set_btns[0] = guider_ui.screen_set_choose_btn_1;
	set_btns[1] = guider_ui.screen_set_choose_btn_2;
	set_btns[2] = guider_ui.screen_set_choose_btn_3;
	set_btns[3] = guider_ui.screen_set_choose_btn_4;
	ui.stateJustChanged = 0;
	UI_Update_Set_Choose_Focus();
}

static void UI_Set_Choose_ProcessInput(char key){
    if (key == '\0') return;

    if (key == 'B') {
        global_cursor = (global_cursor + 1) % 4;
        UI_Update_Set_Choose_Focus();
    }
    else if (key == 'C') {
        global_cursor = (global_cursor + 3) % 4;
        UI_Update_Set_Choose_Focus();
    }
    else if (key == 'D') {
        if (global_cursor == 3){
            UI_ChangeState(UI_STATE_MENU);
        }else{
        	saved_set_index = global_cursor;
        	UI_ChangeState(UI_STATE_CHORD_DISPLAY);
        }
    }
}
// Chord Set Choose End

// Chord Demo Start

void UI_Update_Demo_Buttons_State(void) {
    if (current_chord == 0) {
        lv_obj_add_state(demo_btns[1], LV_STATE_DISABLED);
    } else {
        lv_obj_clear_state(demo_btns[1], LV_STATE_DISABLED);
    }

    if (current_chord >= (chord_group_counts[saved_set_index] - 1)) {
        lv_obj_add_state(demo_btns[3], LV_STATE_DISABLED);
    } else {
        lv_obj_clear_state(demo_btns[3], LV_STATE_DISABLED);
    }
}

void UI_Update_Chord_Demo_Focus(void){
	for (int i = 0; i < 5; i++){
		if (i == global_cursor){
			lv_obj_add_state(demo_btns[i], LV_STATE_FOCUSED);
		}else{
			lv_obj_clear_state(demo_btns[i], LV_STATE_FOCUSED);
		}
	}
}

void UI_Update_Chord_Label(ChordDef *current_chord) {
    lv_obj_t * label = lv_obj_get_child(guider_ui.screen_chord_demo_label_chord_name, 0);

    if (label == NULL || current_chord == NULL) return;

    lv_label_set_text(label, current_chord->name);
}

void UI_Show_Evaluation_Result(ChordDef* detected_chord, int score) {
	static char score_buf[32];
	static char chord_buf[64];
	snprintf(score_buf, sizeof(score_buf), "Score: %d", score);
	snprintf(chord_buf, sizeof(chord_buf), "Chord: %s", detected_chord->name);
    lv_obj_add_flag(guider_ui.screen_chord_demo_img_awesome, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(guider_ui.screen_chord_demo_img_good, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(guider_ui.screen_chord_demo_img_awful, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(guider_ui.screen_chord_demo_label_score, LV_OBJ_FLAG_HIDDEN);
    lv_obj_add_flag(guider_ui.screen_chord_demo_label_chord, LV_OBJ_FLAG_HIDDEN);
    if (score >= 90) {
        lv_obj_clear_flag(guider_ui.screen_chord_demo_img_awesome, LV_OBJ_FLAG_HIDDEN);
   } else if (score >= 20) {
        lv_obj_clear_flag(guider_ui.screen_chord_demo_img_good, LV_OBJ_FLAG_HIDDEN);
    } else {
        lv_obj_clear_flag(guider_ui.screen_chord_demo_img_awful, LV_OBJ_FLAG_HIDDEN);
    }

    lv_label_set_text(guider_ui.screen_chord_demo_label_score, score_buf);
    lv_label_set_text(guider_ui.screen_chord_demo_label_chord, chord_buf);
    lv_obj_clear_flag(guider_ui.screen_chord_demo_label_score, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(guider_ui.screen_chord_demo_label_chord, LV_OBJ_FLAG_HIDDEN);
    lv_obj_clear_flag(guider_ui.screen_chord_demo_cont_result, LV_OBJ_FLAG_HIDDEN);
    is_pop_open = 1;
}

void UI_Hide_Evaluation_Result(void) {
    lv_obj_add_flag(guider_ui.screen_chord_demo_cont_result, LV_OBJ_FLAG_HIDDEN);
    is_pop_open = 0;
}


void UI_Draw_Demo(void){
	setup_scr_screen_chord_demo(&guider_ui);
	lv_scr_load_anim(guider_ui.screen_chord_demo, LV_SCR_LOAD_ANIM_NONE, 0, 0, true);
	demo_btns[0] = guider_ui.screen_chord_demo_label_close;
	demo_btns[1] = guider_ui.screen_chord_demo_label_prev;
	demo_btns[2] = guider_ui.screen_chord_demo_label_play_pause;
	demo_btns[3] = guider_ui.screen_chord_demo_label_next;
	demo_btns[4] = guider_ui.screen_chord_demo_btn_test;
    UI_Update_Demo_Buttons_State();
	ui.stateJustChanged = 0;
	UI_Update_Chord_Demo_Focus();
}

static void UI_Chord_Demo_ProcessInput(char key){
    if (key == '\0') return;

    if (key == 'B') {
        global_cursor = (global_cursor + 1) % 5;
        if (lv_obj_has_state(demo_btns[global_cursor], LV_STATE_DISABLED)){
        	global_cursor = (global_cursor + 1) % 5;
        }
        UI_Update_Chord_Demo_Focus();
    }
    else if (key == 'C') {
        global_cursor = (global_cursor + 4) % 5;
        if (lv_obj_has_state(demo_btns[global_cursor], LV_STATE_DISABLED)){
        	global_cursor = (global_cursor + 4) % 5;
        }
        UI_Update_Chord_Demo_Focus();
    }
    else if (key == 'D') {
        if (global_cursor == 0){
            UI_ChangeState(UI_STATE_CHORD);
        }else if (global_cursor == 1){
        	if (current_chord > 0){
        		current_chord--;
        		ChordDef * current = all_chord_groups[saved_set_index][current_chord];
        		UI_Update_Chord_Label(current);
        		show_chord(current);
            	UI_Update_Demo_Buttons_State();
            	if (current_chord == 0){
            		global_cursor = 2;
            	}
            	UI_Update_Chord_Demo_Focus();
        	}
        }else if (global_cursor == 2){
        	Toggle_Play_Pause();
        }else if (global_cursor == 3){
        	if (current_chord < (chord_group_counts[saved_set_index] - 1)){
        		current_chord++;
        		ChordDef * current = all_chord_groups[saved_set_index][current_chord];
        		UI_Update_Chord_Label(current);
        		show_chord(current);
            	UI_Update_Demo_Buttons_State();
            	if (current_chord == chord_group_counts[saved_set_index] - 1){
            		global_cursor = 2;
            	}
            	UI_Update_Chord_Demo_Focus();
        	}
        }else if (global_cursor == 4){
        	is_test = 1 - is_test;
        	if (is_test){
    			lv_obj_clear_state(guider_ui.screen_chord_demo_btn_test, LV_STATE_FOCUSED);
            	lv_obj_add_state(guider_ui.screen_chord_demo_btn_test, LV_STATE_PRESSED);
        	}else{
    			lv_obj_clear_state(guider_ui.screen_chord_demo_btn_test, LV_STATE_PRESSED);
            	lv_obj_add_state(guider_ui.screen_chord_demo_btn_test, LV_STATE_FOCUSED);
        	}
       	 printf("dont change\r\n");
        }
    }
}


// Chord Demo End



// Song Part (Undone)


void UI_Draw_Undone_Cursor(void){
	Gui_StrCenter(0, 120, BLUE, WHITE, (uint8_t *)"* Exit *", 16, 0);
	Gui_StrCenter(0, 150, BLUE, WHITE, (uint8_t *)"- There should be a dotstar on the led strip -", 16, 0);
}

void UI_Draw_Undone(){
	LCD_Clear(WHITE);
	Gui_StrCenter(0, 30, BLACK, WHITE, (uint8_t *)"- Still Undone -", 16, 1);
	UI_Draw_Undone_Cursor();
	ui.stateJustChanged = 0;
}

// Song Part End




// Main FSM
void UI_Process(void){
	char key = keypad_scan();
	switch (ui.currentState){
	case UI_STATE_LOGO:
		if (ui.stateJustChanged){
			UI_Draw_Logo();
		}

		if (key == 'D'){
			UI_ChangeState(UI_STATE_MENU);
		}
		break;

	case UI_STATE_MENU:
		if (ui.stateJustChanged){
			UI_Draw_Menu();
		}
		UI_Menu_ProcessInput(key);
		break;
	case UI_STATE_CHORD:
		if (ui.stateJustChanged){
			UI_Draw_Set_Choose();
		}
		UI_Set_Choose_ProcessInput(key);
		break;
	case UI_STATE_SONGS:
		//if (ui.stateJustChanged){
			//UI_Draw_Song_Choose();
		//}

		//UI_Song_ProcessInput(key);
		break;

	case UI_STATE_UNDONE:
		if (ui.stateJustChanged){
			UI_Draw_Undone();
			DotStar_Generate();
		}
		if (key == 'D'){
			UI_ChangeState(UI_STATE_MENU);
		}
		break;
	case UI_STATE_CHORD_DISPLAY:
	     if (ui.stateJustChanged){
	    	 UI_Draw_Demo();
	    	 ChordDef* target = all_chord_groups[saved_set_index][current_chord];
	    	 UI_Update_Chord_Label(target);
	         show_chord(target);
	         UI_Hide_Evaluation_Result();
	     }

         if (is_pop_open) {
             if (key == 'D') {
                 UI_Hide_Evaluation_Result();
             }
         } else {
	         UI_Chord_Demo_ProcessInput(key);
        	 printf("stuck here 0\r\n");
	         if (is_test){
	        	 printf("stuck here 1\r\n");
	        	 ChordDef* detected_chord = recognize_chord_from_audio();
	        	 printf("stuck here 2\r\n");
	        	 if (detected_chord != NULL) {
	        		 ChordDef* target = all_chord_groups[saved_set_index][current_chord];
	        		 int score = evaluate_current_chord_score(target);
	        		 if (score > 10 ){
		        		 UI_Show_Evaluation_Result(detected_chord, score);
	        		 }
	        	 }
	         }
         }
		break;
	}
}

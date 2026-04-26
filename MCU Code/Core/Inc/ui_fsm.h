/*
 * ui_fsm.h
 *
 *  Created on: Mar 24, 2026
 *      Author: syoshino
 */

#ifndef INC_UI_FSM_H_
#define INC_UI_FSM_H_

#include <stdint.h>

typedef enum{
	UI_STATE_LOGO = 0,
	UI_STATE_MENU,
	UI_STATE_CHORD,
	UI_STATE_SONGS,
	UI_STATE_UNDONE,
	UI_STATE_CHORD_DISPLAY,
}UI_State_t;



typedef struct{
	UI_State_t currentState;
	UI_State_t prevState;
	uint8_t stateJustChanged;
}UI_Manager_t;

void UI_Init(void);

void UI_ChangeState(UI_State_t newState);

void UI_Process(void);
#endif /* INC_UI_FSM_H_ */

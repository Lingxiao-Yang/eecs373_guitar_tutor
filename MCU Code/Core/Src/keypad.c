/*
 * keypad.c
 *
 *  Created on: Mar 23, 2026
 *      Author: syoshino
 */


#include "keypad.h"

const char keyMap[4][4] = {
    {'1', '2', '3', 'A'},
    {'4', '5', '6', 'B'},
    {'7', '8', '9', 'C'},
    {'*', '0', '#', 'D'}
};

char keypad_scan(void) {
    GPIO_TypeDef* rowPorts[4] = {ROW1_GPIO_Port, ROW2_GPIO_Port, ROW3_GPIO_Port, ROW4_GPIO_Port};
    uint16_t rowPins[4]     = {ROW1_Pin, ROW2_Pin, ROW3_Pin, ROW4_Pin};

    GPIO_TypeDef* colPorts[4] = {COL1_GPIO_Port, COL2_GPIO_Port, COL3_GPIO_Port, COL4_GPIO_Port};
    uint16_t colPins[4]     = {COL1_Pin, COL2_Pin, COL3_Pin, COL4_Pin};
    static char prev_key = '\0';
    for (int row = 0; row < 4; row++) {
        HAL_GPIO_WritePin(rowPorts[row], rowPins[row], GPIO_PIN_RESET);
        for (int col = 0; col < 4; col++) {
           if (HAL_GPIO_ReadPin(colPorts[col], colPins[col]) == GPIO_PIN_RESET) {
        	    HAL_Delay(40);
        	    if (HAL_GPIO_ReadPin(colPorts[col], colPins[col]) == GPIO_PIN_RESET){
        	    	char current_key = keyMap[row][col];
        	    	HAL_GPIO_WritePin(rowPorts[row], rowPins[row], GPIO_PIN_SET);
        	    	if (current_key != prev_key){
        	    		prev_key = current_key;
        	    		return current_key;
        	    	}else{
        	    		return '\0';
        	    	}
        	    }
           }
        }
        HAL_GPIO_WritePin(rowPorts[row], rowPins[row], GPIO_PIN_SET);
    }
    prev_key = '\0';
    return '\0';
}

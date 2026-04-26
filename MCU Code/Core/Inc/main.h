/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define COL4_Pin GPIO_PIN_3
#define COL4_GPIO_Port GPIOF
#define ROW1_Pin GPIO_PIN_5
#define ROW1_GPIO_Port GPIOF
#define TFT_RES_Pin GPIO_PIN_12
#define TFT_RES_GPIO_Port GPIOF
#define TFT_BLK_Pin GPIO_PIN_13
#define TFT_BLK_GPIO_Port GPIOF
#define TFT_CS_Pin GPIO_PIN_14
#define TFT_CS_GPIO_Port GPIOD
#define TFT_DC_Pin GPIO_PIN_15
#define TFT_DC_GPIO_Port GPIOD
#define ROW2_Pin GPIO_PIN_8
#define ROW2_GPIO_Port GPIOC
#define ROW3_Pin GPIO_PIN_9
#define ROW3_GPIO_Port GPIOC
#define COL1_Pin GPIO_PIN_10
#define COL1_GPIO_Port GPIOC
#define ROW4_Pin GPIO_PIN_11
#define ROW4_GPIO_Port GPIOC
#define COL2_Pin GPIO_PIN_12
#define COL2_GPIO_Port GPIOC
#define COL3_Pin GPIO_PIN_2
#define COL3_GPIO_Port GPIOD

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

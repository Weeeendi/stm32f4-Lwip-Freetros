/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal.h"

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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define nRST_Pin GPIO_PIN_5
#define nRST_GPIO_Port GPIOA
#define Unit_Rx_Pin GPIO_PIN_9
#define Unit_Rx_GPIO_Port GPIOD
#define CS_Pin GPIO_PIN_12
#define CS_GPIO_Port GPIOD
#define CLK_Pin GPIO_PIN_13
#define CLK_GPIO_Port GPIOD
#define DI_Pin GPIO_PIN_14
#define DI_GPIO_Port GPIOD
#define DO_Pin GPIO_PIN_15
#define DO_GPIO_Port GPIOD
#define RS_485_TX_Pin GPIO_PIN_9
#define RS_485_TX_GPIO_Port GPIOA
#define RS_485_RX_Pin GPIO_PIN_10
#define RS_485_RX_GPIO_Port GPIOA
#define JDQ2_Pin GPIO_PIN_11
#define JDQ2_GPIO_Port GPIOA
#define JDQ1_Pin GPIO_PIN_12
#define JDQ1_GPIO_Port GPIOA
#define DI03_Pin GPIO_PIN_11
#define DI03_GPIO_Port GPIOC
#define DI04_Pin GPIO_PIN_12
#define DI04_GPIO_Port GPIOC
#define DI01_Pin GPIO_PIN_0
#define DI01_GPIO_Port GPIOD
#define ADCS_Pin GPIO_PIN_1
#define ADCS_GPIO_Port GPIOD
#define ADSCLK_Pin GPIO_PIN_2
#define ADSCLK_GPIO_Port GPIOD
#define ADDIN_Pin GPIO_PIN_3
#define ADDIN_GPIO_Port GPIOD
#define ADDOUT_Pin GPIO_PIN_4
#define ADDOUT_GPIO_Port GPIOD
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_7
#define SDA_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

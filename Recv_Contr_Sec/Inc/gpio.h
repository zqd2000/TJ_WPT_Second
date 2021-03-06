/**
  ******************************************************************************
  * File Name          : gpio.h
  * Description        : This file contains all the functions prototypes for 
  *                      the gpio  
  ******************************************************************************
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __gpio_H
#define __gpio_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
#include "main.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* USER CODE BEGIN Private defines */

#define MOS_Switch_ON()								 HAL_GPIO_WritePin(GPIOA,	GPIO_PIN_1,	 GPIO_PIN_SET)
#define MOS_Switch_OFF()							 HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1,  GPIO_PIN_RESET)
#define MOS_Switch_TOGGLE()            HAL_GPIO_TogglePin(GPIOA,GPIO_PIN_1)	 
	 
#define LED1_ON()											 HAL_GPIO_WritePin(GPIOB,	GPIO_PIN_0,	 GPIO_PIN_SET)
#define LED1_OFF()										 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0,  GPIO_PIN_RESET)
#define LED1_TOGGLE()                  HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_0)
	 
#define LED2_ON()											 HAL_GPIO_WritePin(GPIOB,	GPIO_PIN_1,	 GPIO_PIN_SET)
#define LED2_OFF()										 HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1,  GPIO_PIN_RESET)
#define LED2_TOGGLE()                  HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_1)

#define Trans_485_En()								 HAL_GPIO_WritePin(GPIOA,	GPIO_PIN_11,	 GPIO_PIN_SET)
#define Rece_485_En()									 HAL_GPIO_WritePin(GPIOA,	GPIO_PIN_11,	 GPIO_PIN_RESET)
	 
/* USER CODE END Private defines */

void MX_GPIO_Init(void);

/* USER CODE BEGIN Prototypes */

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ pinoutConfig_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/

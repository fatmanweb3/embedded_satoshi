/*
 * LED.h
 *
 *  Created on: Aug 19, 2025
 *      Author: sudharsan
 */

#ifndef INC_LED_H_
#define INC_LED_H_

#include "stm32f446xx.h"
#include <stdint.h>


void LED_Init(void);
void LED_On(void);
void LED_Off(void);
void LED_Toggle(void);


#endif /* INC_LED_H_ */

/*
 * LED.c
 *
 *  Created on: Aug 19, 2025
 *      Author: sudharsan
 */


#include "led.h"

#define LED_PORT    GPIOA
#define LED_PIN     5

void LED_Init(void)
{
    RCC->AHB1ENR |= (1 << 0);            // Enable GPIOA clock
    LED_PORT->MODER &= ~(3 << (LED_PIN * 2));
    LED_PORT->MODER |=  (1 << (LED_PIN * 2)); // PA5 output
}

void LED_On(void)
{
    LED_PORT->ODR |= (1 << LED_PIN);
}

void LED_Off(void)
{
    LED_PORT->ODR &= ~(1 << LED_PIN);
}

void LED_Toggle(void)
{
    LED_PORT->ODR ^= (1 << LED_PIN);
}

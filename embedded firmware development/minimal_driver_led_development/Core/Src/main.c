#include "led.h"

void delay_ms(volatile uint32_t delay)
{
    for (volatile uint32_t i = 0; i < delay * 4000; i++);
}

int main(void)
{
    LED_Init();

    while (1)
    {
        LED_Toggle();
        delay_ms(500);
    }
}

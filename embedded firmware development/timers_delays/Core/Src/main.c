#include "stm32f446xx.h"

volatile uint32_t ms_ticks = 0;   // millisecond counter

// SysTick ISR
void SysTick_Handler(void)
{
    ms_ticks++;
}

void delay_ms(uint32_t ms)
{
    uint32_t start = ms_ticks;
    while ((ms_ticks - start) < ms);
}

int main(void)
{
    // Init LED (PA5)
    RCC->AHB1ENR |= (1 << 0);
    GPIOA->MODER &= ~(3 << (5 * 2));
    GPIOA->MODER |=  (1 << (5 * 2));

    // Configure SysTick for 1ms tick
    SysTick_Config(SystemCoreClock / 1000);

    while (1)
    {
        GPIOA->ODR ^= (1 << 5); // toggle LED
        delay_ms(500);          // 500ms ON, 500ms OFF → 1Hz blink
    }
}

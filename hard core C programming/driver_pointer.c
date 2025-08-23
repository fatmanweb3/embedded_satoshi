#include <stdint.h>
#include <stdio.h>

#define GPIO_SET        1
#define GPIO_CLEAR      2
#define GPIO_TOGGLE     3


void gpio_write(void *reg, uint8_t pin, uint8_t action, uint8_t reg_size)
{
    switch (reg_size)
    {
        case 8: // 8 bit register
        {
            volatile uint8_t *r = (volatile uint8_t*)reg;
            switch (action)
            {
            case GPIO_SET:   *r |= (1 << pin); break;
            case GPIO_CLEAR:  *r &= ~(1 << pin); break;
            case GPIO_TOGGLE:  *r ^= (1 << pin); break;
            }
            break;
        }
        case 16: // 16-bit register
        {
            volatile uint16_t *r = (volatile uint16_t*)reg;
            switch (action)
            {
            case GPIO_SET:   *r |= (1 << pin); break;
            case GPIO_CLEAR:  *r &= ~(1 << pin); break;
            case GPIO_TOGGLE:  *r ^= (1 << pin); break;
            }
            break;
        }
        case 32: // 32-bit register
        {
            volatile uint32_t *r = (volatile uint32_t*)reg;
            switch (action)

            {
            case GPIO_SET:   *r |= (1 << pin); break;
            case GPIO_CLEAR:  *r &= ~(1 << pin); break;
            case GPIO_TOGGLE:  *r ^= (1 << pin); break;
            }
            
            break;
        }
    }
}

#include "led.h"
#include "gpio.h"

void led_init(void)
{
}

void led_set_state(led_s_t led)
{
    if (led.state == LED_ON)
    {
        switch (led.color)
        {
            case (LED_GREEN):
            {
                HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_SET);
                break;
            }
            default:
                break;
        }
    }
    else
    {
        switch (led.color)
        {
            case (LED_GREEN):
            {
                HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, GPIO_PIN_RESET);
                break;
            }
            default:
                break;
        }
    }
}
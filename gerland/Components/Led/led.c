#include "led.h"
#include "gpio.h"

void led_init(void)
{
}

void led_set_state(led_s_t led)
{
	GPIO_PinState pinState = (led.state == LED_ON) ? GPIO_PIN_SET : GPIO_PIN_RESET;
  switch(led.color){
		case(LED_GREEN):{
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, pinState);
			break;
		}
		case(LED_ORANGE):{
			HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin, pinState);
			break;
		}
		case(LED_RED):{
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, pinState);
			break;
		}
		case(LED_BLUE):{
			HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, pinState);
			break;
		}
		case(LED_ALL):{
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, pinState);
			HAL_GPIO_WritePin(LED_ORANGE_GPIO_Port, LED_ORANGE_Pin, pinState);
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, pinState);
			HAL_GPIO_WritePin(LED_BLUE_GPIO_Port, LED_BLUE_Pin, pinState);
			break;
		}
	}

}
/*
 * led.c
 *
 *  Created on: Mar 11, 2024
 *      Author: AMDD
 */

#include "led.h"
#include "gpio.h"

void led_init(void);
void led_set_state(led_s_t led)
{
	if (led.state == LED_ON)
		{
			switch (led.number)
			{
			case LED_1:
				{

					break;
				}
			case LED_2:
				{

					break;
				}

			}
		}

	}

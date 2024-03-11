/*
 * led.h
 *
 *  Created on: Mar 11, 2024
 *      Author: AMDD
 */

#ifndef LED_H_
#define LED_H_

typedef enum
	{
		LED_OFF = 0,
		LED_ON = 1
	}led_state_e_t;

	typedef enum
		{
			LED_1 = 0,
			LED_2,
			LED_3,
			LED_4,
		}led_number_e_t;

	typedef struct
	{
		led_state_e_t state;
		led_number_e_t number;
	}led_s_t;

void led_init(void);
void led_set_state(led_s_t led);



#endif /* LED_H_ */

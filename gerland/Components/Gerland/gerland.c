#include "main.h"
#include "gerland.h"
#include "led.h"


void gerland_init(void){
	led_init();
}

void gerland_cycle_mode(int delay){
	led_s_t	my_led;
	led_color_e_t leds[] = {LED_GREEN, LED_ORANGE, LED_RED, LED_BLUE};
	
	//reset
	my_led.state = LED_OFF;
	my_led.color = LED_ALL;
	led_set_state(my_led);
	
	// mode
	int i = 0;
	for(i=0; i<sizeof(leds)/sizeof(leds[0]); i++){
		my_led.state = LED_ON;
		my_led.color = leds[i];
		led_set_state(my_led);
		HAL_Delay(delay);
	}
}

void gerland_sequentially_mode(int delay){
	led_s_t	my_led;
	led_color_e_t leds[] = {LED_GREEN, LED_ORANGE, LED_RED, LED_BLUE};
	
	//reset
	my_led.state = LED_OFF;
	my_led.color = LED_ALL;
	led_set_state(my_led);
	
	// mode
	int i = 0;
	for(i=0; i<sizeof(leds)/sizeof(leds[0]); i++){
		my_led.state = LED_ON;
		my_led.color = leds[i];
		led_set_state(my_led);
		HAL_Delay(delay);
		my_led.state = LED_OFF;
		led_set_state(my_led);
	}
}

void gerland_run(gerland_s_t gerland){
	int i;
	
	for(i = 0; i<gerland.repetitions; i++){
		switch(gerland.mode){
			case(GERLAND_CYCLE):{
				gerland_cycle_mode(gerland.speed);
				break;
			}
			case(GERLAND_SEQUENTIALLY):{
				gerland_sequentially_mode(gerland.speed);
				break;
			}
		}
	}
}
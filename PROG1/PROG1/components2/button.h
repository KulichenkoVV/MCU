/*
 * button.h
 *
 *  Created on: Mar 18, 2024
 *      Author: AMDD
 */

#ifndef BUTTON_H_
#define BUTTON_H_

typedef enum
{
	UNPRESSED =0,
	PRESSED =1
}button_state_e_t;

void button_init(void);
void button_get_state(void);
#endif /* BUTTON_H_ */

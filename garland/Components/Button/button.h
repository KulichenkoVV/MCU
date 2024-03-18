#ifndef BUTTON_H
#define BUTTON_H

typedef enum
{
    UNPRESS = 0,
    PRESSED = 1
}button_state_e_t;

void button_init(void);
button_state_e_t button_get_state(void);

#endif
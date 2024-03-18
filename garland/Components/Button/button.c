#include "button.h"
#include "stm32f4xx_it.h"

button_state_e_t button_state = UNPRESS;
static void button_cb(void);

void button_init(void)
{
    it_set_callback(button_cb);
}

button_state_e_t button_get_state(void)
{
    button_state_e_t click_state = button_state;
    button_state = UNPRESS;
    return click_state;
}

static void button_cb(void)
{
    button_state = PRESSED;
}
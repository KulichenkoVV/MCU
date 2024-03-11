#ifndef LED_H
#define LED_H

typedef enum
{
    LED_OFF = 0,
    LED_ON  = 1
}led_state_e_t;

typedef enum
{
    LED_GREEN = 0,
    LED_ORANGE,
    LED_RED,
    LED_BLUE,
    LED_ALL
}led_color_e_t;

typedef struct
{
    led_color_e_t color;
    led_state_e_t state;
}led_s_t;

void led_init(void);
void led_set_state(led_s_t led);

#endif
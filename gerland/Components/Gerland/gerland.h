#ifndef GERLAND_H
#define GERLAND_H

typedef enum
{
    GERLAND_SLOW = 500,
    GERLAND_MEDIUM  = 250,
		GERLAND_FAST = 100,
}gerland_speed_e_t;

typedef enum
{
    GERLAND_CYCLE = 0,
	  GERLAND_SEQUENTIALLY = 1,
}gerland_mode_e_t;

typedef struct
{
    gerland_speed_e_t speed;
	  gerland_mode_e_t mode;
	  int repetitions;
}gerland_s_t;

void gerland_init(void);
void gerland_run(gerland_s_t gerland);

#endif
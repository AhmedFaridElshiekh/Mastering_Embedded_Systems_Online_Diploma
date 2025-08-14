/*
 * DC.c
 *
 *  Created on: 9 Oct 2024
 *      Author: user
 */
#include "DC.h"
unsigned static int speed=0 ;
void (*DC_state)();
void DC_init(){
	printf("DC_init\n");
}
void DC_motor(int s){
	speed=s;
	DC_state =STATE(DC_busy);
}
STATE_define(DC_idle){
	DC_state_id=DC_idle;
	DC_state=STATE(DC_idle);
	printf("DC_idle state : speed=%d \n",speed);
}
STATE_define(DC_busy){
	DC_state_id=DC_busy;
	DC_state=STATE(DC_busy);
	printf("DC_busy state speed=%d\n",speed);
}

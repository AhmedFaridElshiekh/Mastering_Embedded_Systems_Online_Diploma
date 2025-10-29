/*
 * US.c
 *
 *  Created on: 9 Oct 2024
 *      Author: user
 */
#include "US.h"
void (*US_state)();
unsigned int distance;
int generate_random(int l, int r, int count){
    return (rand() % (r - l + 1)) + l;
}
void US_init(){
	printf("US_init\n");
}
STATE_define(US_busy){
	US_state_id=US_busy;
	distance= generate_random(45,55,1);
	printf("US_busy state : distance=%d \n",distance);
	US_distance_set(distance);
	US_state=STATE(US_busy);
}



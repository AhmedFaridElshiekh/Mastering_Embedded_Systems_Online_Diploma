/*
 * CA.c
 *
 *  Created on: 9 Oct 2024
 *      Author: user
 */

#include "CA.h"
static int CA_speed=0 ;
static int CA_distance=0 ;
static int CA_threshold=50 ;

void (*CA_state)();
void US_distance_set(int d){
	CA_distance=d;
( CA_distance <= CA_threshold ) ? (CA_state = STATE(CA_waiting)) : (CA_state = STATE(CA_driving));
printf("US--------distance=%d------->CA\n",CA_distance);
}

STATE_define(CA_waiting)
{
	CA_state_id=CA_waiting;
	printf ("CA_Waiting state : distance=%d  speed=%d \n" ,CA_distance,CA_speed );

	CA_speed=0;
	DC_motor(CA_speed);

}
STATE_define(CA_driving)
{
	CA_state_id=CA_driving;
	printf ("CA_Driving state : distance=%d  speed=%d \n" ,CA_distance,CA_speed );
	CA_speed=30;
	DC_motor(CA_speed);


}

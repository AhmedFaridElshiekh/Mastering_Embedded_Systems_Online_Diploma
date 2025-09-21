/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{
int m=29;
int* ab;

printf("Address of m : %x\n",&m);
printf("value of m : %d\n",m);
printf("Now ab is assigned with the address of m\n");
ab=&m;
printf("Address of pointer ab : %x\n",ab);
printf("content of ab pointer : %d\n",*ab);
m=34;
printf("The value of m assigned to 34 now.\n");
printf("Address of pointer ab : %x\n",ab);
printf("content of ab pointer : %d\n",*ab);
printf("The pointer variable ab is assigned with the value 7 now\n");
*ab=7;
printf("Address of m : %x\n",&m);
printf("value of m : %d\n",m);






	return 0;
}



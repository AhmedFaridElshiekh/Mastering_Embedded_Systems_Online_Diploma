/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
	float  x,y;
	printf("Enter two numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&x,&y);
	printf("product: %f",x*y);
	return 0;

}


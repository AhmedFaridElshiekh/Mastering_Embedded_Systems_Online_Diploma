/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
	float x;
	printf("Enter a number: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&x);
	if(x>0)
		printf("%f is positive",x);
	else if(x==0)
		printf("you entered zero");
	else
		printf("%f is negative",x);




	return 0;

}


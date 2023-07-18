/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
	float a,b,c;
	printf("Enter value of a:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f\n",a);
	printf("After swapping, value of b = %f",b);


	return 0;

}


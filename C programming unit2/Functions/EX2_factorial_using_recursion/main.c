/*
 * main.c
 *
 *      Author: Ahmed Farid
 */

#include<stdio.h>
int fact(int x);
int main(void)
{
	int x;
	printf("Enter a positive integer: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	printf("Factorial of %d =%d",x,fact(x));




return 0;
}


int fact(int x){
	if(x>=1)
		return x*fact(x-1);
	else
		return 1;
}

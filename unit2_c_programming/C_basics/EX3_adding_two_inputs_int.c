/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter two integers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&x,&y);
	printf("%d",x+y);
	return 0;

}


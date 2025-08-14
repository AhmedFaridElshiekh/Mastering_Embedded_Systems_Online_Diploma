/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
#include<string.h>
int pow(int x,int y);

int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",pow(x,y));
return 0;
}
int pow(int x,int y){
	if(y<1)
		return 1;
	else
		return x*pow(x,y-1);
}



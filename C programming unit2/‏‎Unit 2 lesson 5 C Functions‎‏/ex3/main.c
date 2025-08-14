/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
void reverse(char x[],int y);
#include<stdio.h>
#include<string.h>
int main(void)
{
	char x[100];
	int y;
	gets(x);
	y=strlen(x);
	reverse(x,y);
return 0;
}
void reverse(char x[],int y){

	printf("%c",x[y-1]);
	y--;
	if(y==0);
	else
	reverse(x,y);



}


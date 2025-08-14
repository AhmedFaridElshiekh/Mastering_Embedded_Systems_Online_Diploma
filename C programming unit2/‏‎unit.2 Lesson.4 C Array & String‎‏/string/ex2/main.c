/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{

char text [100];
int i;
printf("Enter a string:");
fflush(stdin);fflush(stdout);
gets(text);
for(i=0;text[i]!='\0';i++)
{

}
printf("Length of string:%d",i);


	return 0;

}



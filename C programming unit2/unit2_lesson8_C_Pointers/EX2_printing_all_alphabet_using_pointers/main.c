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
	char c;
	char *ptr;
	ptr=&c;
	for (c = 'A'; c <= 'Z'; (*ptr)++)
	 printf("%c ", *ptr);







	return 0;
}



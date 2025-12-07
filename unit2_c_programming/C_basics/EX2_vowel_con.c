/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
	char x;
	printf("Enter an alpabet: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&x);
	switch(x)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowel",x);
		break;
	default:
		printf("%c is a consonant",x);

	}



	return 0;

}


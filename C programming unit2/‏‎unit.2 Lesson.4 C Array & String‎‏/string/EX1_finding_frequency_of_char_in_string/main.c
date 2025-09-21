/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{

char text [100],x;
int i,count=0;
printf("Enter a string:");
fflush(stdin);fflush(stdout);

gets(text);
printf("Enter a character to find frequency: ");
fflush(stdin);fflush(stdout);
scanf("%c",&x);
for(i=0;text[i]!='\0';i++)
{
	if(text[i]==x)
		count++;
}
printf("Frequency of %c =%d",x,count);


	return 0;

}



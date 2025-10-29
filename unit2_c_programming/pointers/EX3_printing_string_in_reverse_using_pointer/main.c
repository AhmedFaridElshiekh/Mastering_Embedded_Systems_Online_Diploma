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
char str[50];
char reverse[50];
char* s1=str;
char* s2=reverse;
int l;
gets(s1);
l=strlen(s1);
s1+=l-1;

while(l>0){
	*s2=*s1;
	s1--;
	s2++;
	l--;


}
*s2='\0';
printf("%s",reverse);





	return 0;
}



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
int arr[5]={1,2,3,4,5};
int* ptr=arr+4;
int i;
for(i=0;i<5;i++){
	printf("element %d %d\n",i+1,*ptr);
	ptr--;
}




	return 0;
}



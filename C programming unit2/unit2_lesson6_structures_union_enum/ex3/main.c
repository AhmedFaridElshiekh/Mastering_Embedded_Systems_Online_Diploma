/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct Scomplex{
	double real;
	double img;
};
int main(void)
{
	struct Scomplex n1,n2;
	printf("for 1st complex number\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdin);fflush(stdout);
	scanf("%lf%lf",&n1.real,&n1.img);
	printf("for 2st complex number\n");
	printf("Enter real and imaginary respectively:");
	fflush(stdin);fflush(stdout);
	scanf("%lf%lf",&n2.real,&n2.img);
	printf("sum=%lf + %lfi",n1.real+n2.real,n1.img+n2.img);












	return 0;
}



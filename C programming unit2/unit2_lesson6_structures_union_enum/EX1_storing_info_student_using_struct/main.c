/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
struct Sstudent{
	char name[50];
	int roll;
	float marks;
};
int main(void)
{
	struct Sstudent s;
	printf("Enter information of students:\n");
	printf("Enter name :");
	fflush(stdin);fflush(stdout);
	gets(s.name);
	printf("Enter roll number:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&s.roll);
	printf("Enter marks:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&s.marks);
	printf("Displaying information\n");
	printf("name:%s\n",s.name);
	printf("Roll:%d\n",s.roll);
	printf("Marks:%f\n",s.marks);







	return 0;
}



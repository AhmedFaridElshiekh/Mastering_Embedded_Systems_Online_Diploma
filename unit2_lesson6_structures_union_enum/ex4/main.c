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
	float marks;
};
int main(void)
{
	struct Sstudent s[10];
	int i;
	for(i=0;i<10;i++){
		printf("for roll number %d\n",i+1);
		printf("Enter name:");
		fflush(stdin);fflush(stdout);
		gets(s[i].name);
		printf("Enter marks:");
		fflush(stdin);fflush(stdout);
		scanf("%f",&s[i].marks);

	}
	printf("Displaying information of students:\n");
	for(i=0;i<10;i++){
			printf("information for roll number %d\n",i+1);
			printf("name:%s\n",s[i].name);
			printf("marks:%f\n",s[i].marks);

		}














	return 0;
}



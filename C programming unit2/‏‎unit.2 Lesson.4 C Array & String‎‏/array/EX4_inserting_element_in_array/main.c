/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{

int arr[100],n,x,i,pos;
printf("Enter number of elements: ");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
for(i=0;i<n;i++)
{

	scanf("%d",&arr[i]);

}
printf("Enter the element to be inserted: ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
printf("Enter the location: ");
fflush(stdin);fflush(stdout);
scanf("%d",&pos);
for(i=n;i>=pos;i--)
{
	arr[i]=arr[i-1];
}
arr[pos-1]=x;
n++;
for (i = 0; i < n; i++)
       printf("%d ", arr[i]);




	return 0;

}



/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{

int arr[100],n,x,i,pos=0;
printf("Enter number of elements: ");
fflush(stdin);fflush(stdout);
scanf("%d",&n);
for(i=0;i<n;i++)
{

	scanf("%d",&arr[i]);

}
printf("Enter the element to be searched: ");
fflush(stdin);fflush(stdout);
scanf("%d",&x);
for(i=0;i<n;i++)
{

	if(arr[i]==x)
	{
		pos=i;
		break;

	}
}
if(pos!=0)
  printf("Number found at the loction =%d",pos+1);
else
 printf("not found ");




	return 0;

}



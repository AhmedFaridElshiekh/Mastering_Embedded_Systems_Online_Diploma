/*
 * main.c
 *
 *      Author: Ahmed Farid
 */

#include<stdio.h>
void prime(int x,int y);
int main(void)
{
	int x,y;
	printf("Enter two numbers(intervals):");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&x,&y);
	prime(x,y);



return 0;
}

void prime(int x,int y){
	int i,j,flag=1;
	printf("Prime numbers between %d and %d are:",x,y);
	for(i=x+1;i<y;i++)
	{
		flag=1;
		for(j=2;j<i;j++){

			if(i%j==0){
				flag=0;
				break;
			}


		}
		if(flag)
			printf("%d ",i);



	}

}

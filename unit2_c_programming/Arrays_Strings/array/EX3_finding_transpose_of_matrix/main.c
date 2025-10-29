/*
 * main.c
 *
 *      Author: Ahmed Farid
 */
#include<stdio.h>
int main(void)
{
float mat[100][100],trans[100][100];
int x,y,i,j;
printf("Enter rows and columns of matrix: ");
fflush(stdin);fflush(stdout);
scanf("%d%d",&x,&y);
printf("Enter elements of matrix\n");

for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("Enter element a%d%d:",i+1,j+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&mat[i][j]);
	}
}

for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		printf("%f\t",mat[i][j]);
		;
	}
	printf("\n");
}

for(i=0;i<x;i++)
{
	for(j=0;j<y;j++)
	{
		trans[j][i]=mat[i][j];
	}
}
printf("Transpose of Matrix\n");
for(i=0;i<y;i++)
{
	for(j=0;j<x;j++)
	{
		printf("%f\t",trans[i][j]);
		;
	}
	printf("\n");
}



	return 0;

}



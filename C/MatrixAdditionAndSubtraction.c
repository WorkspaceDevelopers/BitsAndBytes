#include<stdio.h>
int main()
{
	int i,j,row,column,matrix1[10][10],matrix2[10][10];
	int sum[10][10],difference[10][10];
	
	printf("Enter the number of rows and columns of the matrices:\n");
	scanf("%d%d", &row,&column);
	
	printf("Enter the terms of Matrix 1\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d", &matrix1[i][j]);
		}
	}
	
	printf("Enter the terms of Matrix 2\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d", &matrix2[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			sum[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	printf("\nThe sum of the two matrices is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t", sum[i][j]);
		}
		
		printf("\n");
		
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			difference[i][j] = matrix1[i][j] - matrix2[i][j];
		}
	}
	
	printf("\nThe Difference of the two matrices is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t", difference[i][j]);
		}
		
		printf("\n");
		
	}
	
}
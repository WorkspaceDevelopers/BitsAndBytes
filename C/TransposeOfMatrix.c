#include<stdio.h>
void main()
{
	int i,j,row,column;
	int arr[10][10],transpose[10][10];
	
	printf("Enter the number of rows and columns of the matrix respectively:\n");
	scanf("%d%d",&row,&column);
	
	printf("\nEnter the terms of the matrix:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	
	printf("\nThe entered matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			transpose[j][i] = arr[i][j];
		}
	}
	
	printf("\nThe transpose of the given matrix is:\n");
	for(i=0;i<column;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}	
}
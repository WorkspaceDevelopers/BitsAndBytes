#include<stdio.h>

int matrixMultiplication(int,int,int,int);

int i,j,r1,r2,c1,c2,k;
int mat1[50][50], mat2[50][50], c[50][50];

void main()
{
	int row1,row2,col1,col2;
	
	printf("\nEnter the number of rows in Matrix 1:\n");
	scanf("%d",&row1);
	
	printf("\nEnter the number of columns in Matrix 1:\n");
	scanf("%d",&col1);
	
	printf("\nEnter the number of rows in Matrix 2:\n");
	scanf("%d",&row2);
	
	printf("\nEnter the number of rows in Matrix 2:\n");
	scanf("%d",&col2);
	
	matrixMultiplication(row1,col1,row2,col2);
}

int matrixMultiplication(r1,c1,r2,c2)
{
	int i,j,k;
	
	if(c1 != r2)
	{
		printf("\nSorry!! The multiplication is not possible. \n");
	}
	
	else
	{
		printf("\nEnter the elements of the first matrix:\n");
		for(i=0;i<r1;++i)
		{
			for(j=0;j<c1;++j)
			{
				scanf("%d", &mat1[i][j]);
			}
		}
		
		printf("\nEnter the elements of the second matrix:\n");
		for(i=0;i<r2;++i)
		{
			for(j=0;j<c2;++j)
			{
				scanf("%d", &mat2[i][j]);
			}
		}
		
		printf("\nThe first matrix is:\n");
		for(i=0;i<r1;++i)
		{
			for(j=0;j<c1;++j)
			{
				printf("%d\t", mat1[i][j]);
			}
			printf("\n");
		}
		
		printf("\nThe second matrices is:\n");
		for(i=0;i<r2;++i)
		{
			for(j=0;j<c2;++j)
			{
				printf("%d\t", mat2[i][j]);
			}
			printf("\n");
		}

		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;++j)
			{
				c[i][j] = 0;
				for(k=0;k<r2;k++)
				{
					c[i][j] += mat1[i][k]*mat2[k][j]; 
				}
			}
		}
		
		printf("\nThe product of the two matrices is:\n");
		for(i=0;i<r1;++i)
		{
			for(j=0;j<c2;++j)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
		
	}
	
}
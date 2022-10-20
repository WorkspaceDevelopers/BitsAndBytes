#include<stdio.h>
int swap(int *x, int *y);

void main()
{
	int num1,num2;
	
	printf("Enter the two numbers:\n");
	
	printf("num 1:\t");
	scanf("%d",&num1);
	
	printf("num 2:\t");
	scanf("%d",&num2);
	
	swap(&num1,&num2);
}

int swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("\nThe two numbers after swapping are num 1: %d and num 2: %d", *a,*b);
}
#include<stdio.h>

int add(int, int);
int subtract(int,int);
int multiply(int,int);
int divide(int,int);
int modulus(int,int);

void main()
{
	int i,j,operation,num1,num2;
	
	do
	{
		printf("\nSelect the operation to be performed:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
		scanf("%d", &operation);
		
		switch(operation)
		{
			case 1:
				printf("\nEnter the two numbers:\n");
				scanf("%d%d",&num1,&num2);
				add(num1,num2);
				break;
				
			case 2:
				printf("\nEnter the two numbers:\n");
				scanf("%d%d",&num1,&num2);
				subtract(num1,num2);
				break;
				
			case 3:	
				printf("\nEnter the two numbers:\n");
				scanf("%d%d",&num1,&num2);
				multiply(num1,num2);
				break;
				
			case 4:
				printf("\nEnter the two numbers:\n");
				scanf("%d%d",&num1,&num2);
				divide(num1,num2);
				break;
				
			case 5:
				printf("\nEnter the two numbers:\n");
				scanf("%d%d",&num1,&num2);
				modulus(num1,num2);
				break;
				
			case 6:
				printf("\nYou have exited the program\n");
				break;
				
			default:
				printf("\nSelect a valid operation\n");
		}
		
		printf("\n--------------------------------\n");
	}
	while(operation != 6);
}

add(int x, int y)
{
	int sum;
	sum = x + y;
	printf("\nThe sum of the two numbers is %d\n", sum);
}

subtract(int x, int y)
{
	int difference;
	difference = x - y;
	printf("\nThe difference of the two numbers is %d\n", difference);
}

multiply(int x, int y)
{
	int product;
	product = x * y;
	printf("\nThe product of the two numbers is %d\n", product);
}

divide(int x, int y)
{
	int division;
	division = x / y;
	printf("\nThe division of the two numbers is %d\n", division);
}

modulus(int x, int y)
{
	int mod;
	mod = x % y;
	printf("\nThe modulus of the two numbers is %d\n", mod);
}
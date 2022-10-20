#include<stdio.h>

int fact(int);

void main()
{
	int i,j,number,answer;
	
	printf("Enter a number:\t");
	scanf("%d", &number);
	
	answer = fact(number);
	printf("\nThe factorial of the number is %d", answer);
}

fact(int x)
{
	int factorial;
	
	if(x != 1)
	{
		factorial = x*fact(x-1);
		return factorial;
	}
	
	else
	{
		return 1;
	}
}
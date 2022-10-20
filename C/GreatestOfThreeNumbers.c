#include<stdio.h>
void main()
{
	int num1,num2,num3;
	
	printf("Enter the three numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("The greatest number is %d", num1);
		}
		
		else
		{
			printf("The greatest number is %d", num3);
		}
	}
	
	else
	{
		printf("The greatest number is %d", num3);
	}
}
#include<stdio.h>
void main()
{
	int sum = 0,i,n;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum = sum+i;
	}
	
	printf("\nThe sum of natural numbers is: %d", sum);
}
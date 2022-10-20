#include<stdio.h>
int main()
{
	int i,j,num;
	int binaryNum[10];
	
	printf("Enter the number in Decimal Form:\n");
	scanf("%d",&num);
	
	for(i=0;num>0;i++)
	{
		binaryNum[i] = num % 2;
		num = num / 2;
	}
	
	printf("The Binary conversion of the given number is: ");
	
	for(i=i-1;i>=0;i--)
	{
		printf("%d", binaryNum[i]);
	}
}
#include<stdio.h>
void main()
{
	int i,total,sum=0;
	int termsarr[10];
	
	printf("Enter the number of terms to be added:\n");
	scanf("%d",&total);
	
	printf("\nEnter the terms:\n");
	for(i=0;i<total;i++)
	{
		scanf("%d",&termsarr[i]);
	}
	
	for(i=0;i<total;i++)
	{
		sum = termsarr[i] + sum;
	}
	
	printf("\nThe sum of the entered terms is %d", sum);
}
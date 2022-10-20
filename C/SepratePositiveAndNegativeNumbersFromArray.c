#include<stdio.h>
void main()
{
	int i,j,k=0,m=0,total;
	int arr[20],positivearr[20],negativearr[20];
	
	printf("Enter the length of the array:\n");
	scanf("%d",&total);
	
	printf("Enter the terms in the array:\n");
	for(i=0;i<total;i++)
	{
		scanf("\t%d",&arr[i]);
	}
	
	for(i=0;i<total;i++)
	{
		if(arr[i]>0)
		{
			positivearr[k] = arr[i];
			k++;
		}
		
		else
		{
			negativearr[m] = arr[i];
			m++;
		}
		
	}
	
	printf("\nThe positive terms are:\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",positivearr[i]);
	}
	
	printf("\n\nThe negative terms are:\n");
	for(i=0;i<m;i++)
	{
		printf("%d\t",negativearr[i]);
	}
	
}
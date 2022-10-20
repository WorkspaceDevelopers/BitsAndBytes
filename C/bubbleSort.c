#include<stdio.h>

int bubbleSort(int,int[]);

void main()
{
	int i,j,num,arr[50];
	
	printf("Enter the number of elements in the array:\n");
	scanf("%d",&num);
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	bubbleSort(num,arr);
	
	printf("Sorted elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int bubbleSort(int num, int arr[])
{
	int i,j,k,temp;
	
	for(i=0;i<num-1;i++)
	{
		for(j=0;j<num-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
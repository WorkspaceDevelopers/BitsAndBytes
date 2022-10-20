#include<stdio.h>

int insertionSort(int,int[]);

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
	
	insertionSort(num,arr);
	
	printf("Sorted elements are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",arr[i]);
	}
}

int insertionSort(int num, int arr[])
{
	int i,j,key;
	
	for(i=1;i<num;i++)
	{
		key = arr[i];
		j = i-1;
		
		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		
		arr[j+1] = key;
		
	}
}
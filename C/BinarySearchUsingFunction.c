#include<stdio.h>
int binarySearch(int[], int,int);

void main()
{
	int i,j,temp,total,searchElement;
	int arr[50];
	
	printf("\nEnter the total number of elements in the array:\n");
	scanf("%d", &total);
	
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<total;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	printf("\nThe entered array is:\n");
	for(i=0;i<total;i++)
	{
		printf("%d\t", arr[i]);
	}
	
	printf("\n\nEnter the element to be searched:\n");
	scanf("%d",&searchElement);
	
	for(i=0;i<total-1;i++)
	{
		for(j=0;j<total-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
	printf("\nThe sorted array is:\n");
	for(i=0;i<total;i++)
	{
		printf("%d\t", arr[i]);
	}
	
	binarySearch(arr,total,searchElement);
}

int binarySearch(int arr[], int total, int searchElement)
{
	int i=0,j=total-1,mid;
	
	while(i<=j)
	{
		mid = ((i+j)/2);
		
		if(arr[mid] == searchElement)
		{
			printf("\n\nThe search element %d is found at position %d.",searchElement,mid+1);
			break;
		}
		
		else if(arr[mid]<searchElement)
		{
			i = mid+1;
		}
		
		else
		{
			j = mid-1;
		}
	}
	
	if(i>j)
	{
		printf("The searchElement is not present in the array.");
	}
}
#include<stdio.h>
void bubbleSort(void);

int total,i,k,j,temp;
int arr[15];

void main()
{
	bubbleSort();
}

void bubbleSort(void)
{
	printf("Enter the total number of terms in the array:\n");
	scanf("%d", &total);
	
	printf("Enter the terms of the array:\n");
	for(i=0;i<total;i++)
	{
		scanf("%d", &arr[i]);
	}
	
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
		printf("\nArray after pass %d\n",i+1);
		for(k=0;k<total;k++)
		{
			printf("%d\t", arr[k]);
		}
	}
	
	printf("\n\n--------------------------\n\nThe sorted array is:\n");
	for(i=0;i<total;i++)
	{
		printf("%d\t", arr[i]);
	}
}
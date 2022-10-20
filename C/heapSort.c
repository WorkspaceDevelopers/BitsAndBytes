#include<stdio.h>

void  heapSort(int[],int);
void createHeap(int[]);
void rebuildHeap(int,int);
int c = 0,num,arr[50];

void main()
{
	int i,j;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
		
	heapSort(arr,num);
	
	printf("\nThe sorted elemenmts are:\n");
	for(i=0;i<num;i++)
		printf("%d\t",arr[i]);
}

void createHeap(int arr[])
{
	int temp,i,j,root;
	for(i=0;i<num;i++)
	{
		j = i;
		do
		{
			root = (j-1)/2;
			if(arr[root] < arr[j])
			{
				temp = arr[root];
				arr[root] = arr[j];
				arr[j] = temp;
			}
			
			j = root;
		}while(j != 0);
	}
}

void rebuildHeap(int i, int root)
{
	int left, right, temp, max;
	max = root;
	
	left = (2*root)+1;
	right = (2*root)+2;
	
	if(arr[left]>arr[max] && left<i)
		max = left;
	if(arr[right]>arr[max] && right<i)
		max = right;
		
	if(max != root)
	{
		temp = arr[root];
		arr[root] = arr[max];
		arr[max] = temp;
		rebuildHeap(i,max);
	}
}

void heapSort(int arr[], int num)
{
	int temp,i;
	createHeap(arr);
	
	for(i=num-1;i>=0;i--)
	{
		temp = arr[i];
		arr[i] = arr[0];
		arr[0] = temp;
		
		rebuildHeap(i,0);
	}
}

#include<stdio.h>

void  mergeSort(int[],int,int);
int merge(int[],int,int,int);
int c = 0,n;

void main()
{
	int i,j,arr[50],num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
		
	mergeSort(arr,0,num-1);
	
	printf("\nThe sorted elemenmts are:\n");
	for(i=0;i<num;i++)
		printf("%d\t",arr[i]);
}

void mergeSort(int arr[],int left,int right)
{
	int mid;
	if(left < right)
	{
		mid = (left + right)/2;
		
		mergeSort(arr,left, mid);
		mergeSort(arr,mid+1,right);
		merge(arr,left,mid,right);		
	}
}

int merge(int arr[],int left, int mid,int right)
{
	int i,j,k;
	int brr[50];
	i = left;
	j = mid+1;
	k = 0;
	
	while(i<=mid && j<=right)
		if(arr[i] < arr[j])
			brr[k++] = arr[i++];
		else
			brr[k++] = arr[j++];
	
	while(i<=mid)
		brr[k++] = arr[i++];
	
	while(j<=right)
		brr[k++] = arr[j++];
		
	for(i=left,j=0;i<=right;i++,j++)
		arr[i] = brr[j];
}
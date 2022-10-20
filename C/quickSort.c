#include<stdio.h>

void  quickSort(int[],int,int);
int partn(int[],int,int);
int c = 0,n;

void main()
{
	int i,j,arr[50],num;
	
	printf("Enter the number of elements:\n");
	scanf("%d",&num);
	
	printf("Enter the elements of the array:\n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
		
	quickSort(arr,0,num-1);
	
	printf("\nThe sorted elemenmts are:\n");
	for(i=0;i<num;i++)
		printf("%d\t",arr[i]);
}

void quickSort(int arr[],int left,int right)
{
	int piv;
	
	if(left<right)
	{
		piv = partn(arr,left,right);
		quickSort(arr,left,piv-1);
		quickSort(arr,piv+1,right);
	}
}

int partn(int arr[],int left,int right)
{
	int piv,temp;
	piv = left;
	while(left<right)
	{
		while(arr[piv]<=arr[right] && piv<right)
			right = right - 1;
		
		if(arr[piv] > arr[right])
		{
			temp = arr[piv];
			arr[piv] = arr[right];
			arr[right] = temp;
			
			piv = right;
			left = left + 1;
		}
		
		while(arr[piv]>=arr[left] && piv>left)
			left = left + 1;
		
		if(arr[piv] < arr[left])
		{
			temp = arr[piv];
			arr[piv] = arr[left];
			arr[left] = temp;
			
			piv = left;
			right = right - 1;
		}
	}
	return piv;
}
#include<stdio.h>

void push1(int[],int);
void pop1(int[]);
void display1(int[]);
void push2(int[],int);
void pop2(int[]);
void display2(int[]);

int j,k,top1=-1,top2;
int n1,n2,n,i;

void main()
{
	int i,op;
	int arr[50];
	
	printf("Enter the limit of stack 1: ");
	scanf("%d",&n1);
	printf("Enter the limit of stack 2: ");
	scanf("%d",&n2);
	
	n = n1+n2;
	top2 = n;
	
	do
	{
	printf("\nMENU : Select an option\nOperation on Stack 1:\n1. PUSH \n2. POP\n3. DISPLAY\nOperation on Stack 2:\n4. PUSH \n5. POP\n6. DISPLAY\n7. EXIT\n");
	scanf("%d",&op);
	
	switch(op)
	{
		case 1:
			printf("\nEnter the element to be inserted: ");
			scanf("%d",&j);
			push1(arr,j);
			break;
		case 2:
			pop1(arr);
			break;
		case 3:
			display1(arr);
			break;
		case 4:
			printf("\nEnter the element to be inserted: ");
			scanf("%d",&k);
			push2(arr,k);
			break;
		case 5:
			pop2(arr);
			break;
		case 6:
			display2(arr);
			break;
		case 7:
			break;
		default:
			printf("\nERROR : Enter a valid option\n");
	}
	}while(op != 7);
}

void push1(int arr[],int j)
{
	if(top1 == n1-1)
	{
		printf("\nStack1 Overflow\n");
	}
	else
	{
		top1 = top1 + 1;
		arr[top1] = j;
	}
}

void push2(int arr[],int j)
{
	if(top2 == n1)
	{
		printf("\nStack2 Overflow\n");
	}
	else
	{
		top2 = top2 - 1;
		arr[top2] = j;
	}
}

void pop1(int arr[])
{
	if(top1 == -1)
	{
		printf("\nStack1 Underflow\n");
	}
	else
	{
		j = arr[top1];
		top1 = top1 - 1;
	}
}

void pop2(int arr[])
{
	if(top2 == n'')
	{
		printf("\nStack2 Underflow\n");
	}
	else
	{
		k = arr[top2];
		top2 = top2 + 1;
	}
}

void display1(int arr[])
{
	if(top1 == -1)
	{
		printf("\nStack 1 is Empty\n");
	}
	else
	{
		for(i=0;i<=top1;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
}

void display2(int arr[])
{
	if(top2 == n)
	{
		printf("\nStack 2 is Empty\n");
	}
	else
	{
		for(i=n-1;i>=top2;i--)
		{
			printf("%d\t",arr[i]);
		}
	}
}
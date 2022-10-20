#include<stdio.h>

void push(int[],int);
void pop(int[]);
void display(int[]);

int top = -1;

void main()
{
	int i,ch,k,l,n;
	int arr[50];
	
	printf("Enter the limit of the stack: ");
	scanf("%d", &n);
	do
	{
		printf("\nMENU : Select an option\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		scanf("%d", &ch);
		
		switch(ch)
		{
			case 1:
				push(arr,n);
				break;
			case 2:
				pop(arr);
				break;
			case 3:
				display(arr);
				break;
			case 4:
				break;			
			default:
				printf("Enter a valid choice\n");
		}
	}while(ch != 4);
}

void push(int arr[], int n)
{
	int item;
	
	if(top == n-1)
		printf("Stack Overflow\n");
		
	else
		printf("Enter the element to push:\n");
		scanf("%d", &item);
		top = top + 1;
		arr[top] = item;
		
}

void pop(int arr[])
{
	int item;
	
	if(top == -1)
		printf("Stack Underflow\n");
		
	else
		item = arr[top];
		top = top - 1;		
}

void display(int arr[])
{
	int i;
	
	if(top == -1)
		printf("The stack is empty\n");
		
	else
		printf("The stack is:\n");
		for(i=0;i<=top;i++)
			printf("%d\t",arr[i]);
}
#include<stdio.h>

void enqueue(int[],int,int);
void dequeue(int[]);
void display(int[]);
int front = -1;
int rear =-1;
int i,n,j,item;

void main()
{
	int op;
	int arr[50];
	
	printf("Enter the size of the circular queue: ");
	scanf("%d",&n);
	
	do
	{
		printf("\nMENU : Select An Option\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("\nEnter the element to be inserted: ");
				scanf("%d",&item);
				enqueue(arr,item,n);
				break;
			case 2:
				dequeue(arr);
				break;
			case 3:
				display(arr);
				break;
			case 4:
				break;
			default:
				printf("\nChoose a valid option\n");
		}
	}while(op != 4);
}

void enqueue(int arr[], int item, int n)
{
	if((front == 0 && rear == n-1) || front == rear+1)
	{
		printf("\nQueue Overflow\n");
	}
	else if(front = -1)
	{
		front = 0;
		rear = 0;
	}
	else if(rear == n-1)
	{
		rear = 0;
	}
	else
	{
		rear = rear + 1;
	}
	arr[rear] = item;
}

void dequeue(int arr[])
{
	if(front == -1)
	{
		printf("\nQueue Underflow\n");
	}
	
	item = arr[front];
	
	if(front == rear)
	{
		front = -1;
		rear = -1;
	}
	else if(front = n-1)
	{
		front = 0;
	}
	else
	{
		rear = rear + 1;
	}
}

void display(int arr[])
{
	if(front == -1)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		if(front > rear)
		{
			for(i=front;i<n;i++)
			{
				printf("%d\t",arr[i]);
			}
			for(j=0;j<rear;j++)
			{
				printf("%d\t",arr[j]);
			}
		}
		else
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",arr[i]);
		}
	}
}
#include<stdio.h>

void enqueue(int[],int,int);
void dequeue(int[]);
void display(int[]);
int front = -1, rear = -1;

void main()
{
	int i,j,num,op,item;
	int arr[50];
	
	printf("Enter the limit of the queue: ");
	scanf("%d",&num);
	
	do
	{
		printf("\nMENU : Select An Option\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("\nEnter the element to be inserted: ");
				scanf("%d",&item);
				enqueue(arr,item,num);
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

void enqueue(int arr[], int item, int num)
{
	if(rear == num-1)
	{
		printf("\nQueue Overflow\n");
	}
	else
	{
		if(rear == -1 && front == -1)
		{
			front = 0;
		}
		
		rear = rear + 1;
		arr[rear] = item;
	}
}

void dequeue(int arr[])
{
	if(front == -1)
	{
		printf("\nQueue Underflow\n");
	}
	else
	{
		int item;
		item = arr[front];
		if(rear == front)
		{
			rear = front = -1;
		}
		else
		{
			front = front + 1;
		}
	}
}

void display(int arr[])
{
	int i;
	if(front == -1)
	{
		printf("\nQueue is Empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\t",arr[i]);
		}
	} 
}
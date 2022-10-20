#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int data;
	struct queue *link;
}*front=NULL,*rear=NULL,*front1,*temp;

void enqueue(int);
void dequeue();
void display();

void main()
{
	int i,j,num,op,item;
	
	do
	{
		printf("\nMENU : Select An Option\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY\n4. EXIT\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("\nEnter the element to be inserted: ");
				scanf("%d",&item);
				enqueue(item);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("\nChoose a valid option\n");
		}
	}while(op != 4);
}

void enqueue(int item)
{
	if(rear == NULL)
	{
		rear = (struct queue*)malloc(1*sizeof(struct queue));
		rear -> data = item;
		rear -> link = NULL;
		front = rear;
	}
	else
	{
		temp = (struct queue*)malloc(1*sizeof(struct queue));
		rear -> link = temp;
		temp -> data = item;
		temp -> link = NULL;
		rear = temp;
	}
}

void dequeue()
{
	front1 = front;
	if(front1 == NULL)
	{
		printf("Queue Underflow");
	}
	else
	{
		if(front1 -> link != NULL)
		{
			front1 = front1 -> link;
			free(front);
			front = front1;
		}
		else
		{
			free(front);
			front == NULL;
			rear == NULL;
		}
	}
}

void display()
{
	front1 = front;
	if(front1 == NULL && rear == NULL)
	{
		printf("Queue is empty");
	}
	
	else
	{
		while(front1 != rear)
		{
			printf("%d\t",front1 -> data);
			front1 = front1 -> link;
		}
		if(front1 == rear)
		{
			printf("%d",front1 -> data);
		}
	}
}

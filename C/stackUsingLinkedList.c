#include<stdio.h>
#include<stdlib.h>

void push(int);
void pop();
void display();

struct stack
{
	int data;
	struct stack *link;
}*top=NULL,*top1,*temp;

void main()
{
	int item,i,ch,n;

	do
	{
		printf("\nMENU : Select an option\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				printf("Enter an element to be inserted: ");
				scanf("%d",&item);
				push(item);
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;			
			default:
				printf("Enter a valid choice\n");
		}
	}while(ch != 4);
}

void push(int item)
{		
	temp = malloc(sizeof(struct stack));
	temp->data = item;
	temp->link = top;
	
	top = temp;
}

void pop()
{
	if(top == NULL)
		printf("Stack Underflow");
		
	else
		top = top->link;	
}

void display()
{
	if(top == NULL)
		printf("The stack is empty");
		
	else
		top1 = top;
		while(top1!=NULL)
			printf("%d\t",top1->data);
			top1 = top1->link;
}
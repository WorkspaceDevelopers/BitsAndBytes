#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

struct node
{
	int data;
	struct node*link;
}*header=NULL,*ptr,*temp;

void insertBeg(int);
void insertEnd(int);
void insertAny(int);

void delBeg();
void delEnd();
void delAny();

void display();

int item,pos,i,j; 

void main()
{
	int i,j,op;
	
	do
	{
		printf("MENU : Select an operation to perform\n1. Insert At Beginning\n2. Insert At End\n3. Insert At Any Position\n4. Delete At Beginning\n5. Delete At End\n6. Delete At Any Position\n7. Display\n8. Exit\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				printf("Enter the element to be inserted: ");
				scanf("%d",&item);
				insertBeg(item);
				break;
				
			case 2:
				printf("Enter the element to be inserted: ");
				scanf("%d",&item);
				insertEnd(item);
				break;
			
			case 3:
				printf("Enter the element to be inserted: ");
				scanf("%d",&item);
				insertAny(item);
				break;
				
			case 4:
				delBeg();
				break;
			
			case 5:
				delEnd();
				break;
			
			case 6:
				delAny();
				break;
			
			case 7:
				display();
				break;
				
			case 8:
				break;
			
			default:
				printf("Enter a correct option");
		}
	}while( op != 8);
}

void insertBeg(int item)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = item;
	temp -> link = NULL;
	
	if(header == NULL)
	{
		header = temp;
	}
	else
	{
		temp -> link = header;
		header = temp;
	}
}

void insertEnd(int item)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = item;
	temp -> link = NULL;
	
	if(header == NULL)
	{
		header = temp;
	}
	else
	{
		ptr = header;
		while(ptr->link != NULL)
		{
			ptr = ptr -> link;
		}
		ptr -> link = temp;
	}
}

void insertAny(int item)
{
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = item;
	temp -> link = NULL;
	
	printf("Enter the position you want to insert the node at: ");
	scanf("%d",&pos);
	
	ptr = temp;
	for(i=0;i<pos;i++)
		{
			ptr = ptr -> link;
		}
		temp -> link = ptr -> link;
		ptr -> link = temp;	
}

void delBeg()
{
	if(header == NULL)
		printf("The list is empty");
	else
	{
		ptr = header;
		header = header -> link;
		free(ptr);
	}
}

void delEnd()
{
	if(header == NULL)
		printf("The list is empty");
	else
	{
		ptr = header;
		while(ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->link;
		}
		temp -> link = NULL;
		free(ptr);
	}
}

void delAny()
{
	if(header == NULL)
		printf("The list is empty");
	else
	{
		printf("Enter the value to be removed: ");
		scanf("%d",&pos);
		
		while(ptr->data != pos)
		{
			temp = ptr;
			ptr = ptr -> link;
		}
		temp -> link = ptr -> link;
		free(ptr);
	}
}

void display()
{
	if(header == NULL)
		printf("List is empty");
	else
	{
		ptr = header;
		
		while(ptr != NULL)
		{
			printf("%d", ptr->data);
			ptr = ptr->link;
		}
	}
}
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void push(int);
int pop();
void display();

void evalPostfix(char[]);

int top = -1,s[50];

void main()
{
	char P[50];
	
	printf("Enter the expression: ");
	scanf("%s",P);
	strcat(P,"#");
	evalPostfix(P);
}

void evalPostfix(char P[])
{
	int i=0,t,dig,x,y,value;
	char op,item;
	
	item = P[i++];
	while(item != '#')
	{
		if(isalnum(item)>0)
		{
			dig = item-'0';
			push(dig);
		}
		else
		{
			op = item;
			x = pop();
			y = pop();
			
			switch(op)
			{
				case '+':
					t = x + y;
					break;
				case '-':
					t = x - y;
					break;
				case '*':
					t = x * y;
					break;
				case '/':
					t = x / y;
					break;
				case '%':
					t = x % y;
					break;
			}
			push(t);
		}
		display();
		item = P[i++];
	}
	value = pop();
	printf("\nValue is %d\n",value);
}

void push(int item)
{
	s[++top] = item;
}

int pop()
{
	return s[top--];
}

void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\t",s[i]);
	}
	printf("\n");
}
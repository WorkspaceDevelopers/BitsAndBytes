#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void infpost(char[],char[],char[]);
int prec(char);

void push(char[],char);
char pop(char[]);
void display(char[]);

int top = -1,i,j;
char item,x;

void main()
{
	char E[50],P[50] = {'\0'},S[50];
	printf("Enter the expression: ");
	scanf("%s",E);
	strcat(E,")");
	
	infpost(E,P,S);
}

void infpost(char E[],char P[], char S[])
{
	push(S,'(');
	while(top > -1)
	{
		item = E[i++];
		x = pop(S);
		
		if(isalnum(item)>0)
		{
			P[j++] = item;
			push(S,x);
		}
		
		else if(item == ')')
		{
			while(x != '(')
			{
				P[j++] = x;
				x = pop(S);
			}
		}
		
		else if(prec(x)>=prec(item))
		{
			
			while(prec(x)>=prec(item))
			{
				if(item == '(')
				{
					break;
				}
				P[j++] = x;
				x = pop(S);	
			}
			push(S,x);
			push(S,item);
		}
		
		else if(prec(x)<prec(item))
		{
			push(S,x);
			push(S,item);
		}
		
		else
		{
			printf("\nInvalidOperation\n");
		}
		display(S);
		printf("\t\t%s\n",P);
	}
	printf("The postfix expression is : %s\n",P);
}

int prec(char item)
{
	if(item == '^')
	{
		return 3;
	}
	else if(item == '*' || item =='/' ||item == '%')
	{
		return 2;
	}
	else if(item == '+' || item =='-')
	{
		return 1;
	}
	else if(item = '(')
	{
		return 0;
	}
}

void push(char S[], char item)
{
	S[++top] = item;
}

char pop(char S[])
{
	return (S[top--]);
}

void display(char S[])
{
	int k;
	for(k=0;k<=top;k++)
	{
		printf("%c",S[k]);
	}
}
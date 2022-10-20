#include<stdio.h>
#include<string.h>
void main()
{
	int i,length,flag=0;
	char string[50];
	
	printf("Enter the string to be checked:\t");
	scanf("%s", &string[i]);
	
	length = strlen(string);
	
	for(i=0;i<length;i++)
	{
		if(string[i] != string[length-i-1])
		{
			flag = 1;
		}
	}
	
	if(flag==0)
	{
		printf("\nThe string '%s' is a palindrome", string);
	}
	
	else
	{
		printf("\nThe string '%s' is not a palindrome", string);
	}
}

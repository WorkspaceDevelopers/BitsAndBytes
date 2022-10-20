#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,length,flag=0;
	char string[50],temp;
	
	printf("Enter the string to be sorted:\t");
	scanf("%s", &string[i]);
	
	length = strlen(string);
	 
	for(i=0;i<length-1;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(string[i] > string[j])
			{
				temp = string[i];
				string[i] = string[j];
				string[j] = temp;
			}
		}
	}
	
	printf("\nThe sorted string is: %s", string);
}
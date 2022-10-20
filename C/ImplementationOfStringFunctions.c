#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,len,operation,compare;
	char string1[20],string2[20],string3[20];
	do
	{
		printf("\nSelect the string operation to be performed:\n1.String Length\n2.String Comparision\n3.String Concatenation\n4.String Copy\n5.Exit\n");
		scanf("%d",&operation);
		
		switch(operation)
		{
			case 1:
				printf("\nEnter the string:\n");
				scanf("%s", &string1[i]);
				len = strlen(string1);
				printf("\nThe length of the given string is %d\n", len);
				break;
			
			case 2:
				printf("\nEnter the first string:\n");
				scanf("%s",&string1);
				printf("\nEnter the second string:\n");
				scanf("%s",&string2);
				compare = strcmp(string1,string2);
				
				if(compare==0)
				{
					printf("\nThe strings are same.\n");
				}
				else
				{
					printf("\nThe strings are different.\n");
				}
				break;
			
			case 3:
				printf("\nEnter the first string:\n");
				scanf("%s",&string1);
				printf("\nEnter the second string:\n");
				scanf("%s",&string2);
				printf("\nThe concatenated string is %s.\n", strcat(string1,string2));
				break;
			
			case 4:
				printf("\nEnter the first string:\n");
				scanf("%s",&string1);
				printf("\nEnter the second string:\n");
				scanf("%s",&string2);
				strcpy(string1,string2);
				printf("\nThe copied strings are:\n\tFirst String: %s\n\tSecond String: %s\n", string1,string2);
				break;
			
			case 5:
				break;
				
			default:
				printf("\nEnter a valid option\n");	
		}
	}while(operation!=5);
}
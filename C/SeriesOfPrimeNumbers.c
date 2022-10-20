#include<stdio.h>
void main()
{
	int i,c=0,flag,n,j;
	
	printf("Enter the limit: ");
	scanf("%d", &n);
	
	printf("\nThe %d prime numbers are:\n",n);
	
	for(i=2;c<n;i++)
	{
		flag = 0;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			printf("%d\t",i);
			c++;
		}
	}	
}
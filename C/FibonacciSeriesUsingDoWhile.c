#include<stdio.h>
void main()
{
	int nextnum=0,i,t1=0,t2=1,n;
	
	printf("Enter the number of terms in the series:\n");
	scanf("%d",&n);
	
	printf("\nThe fibonacci series is:\n");
	
	do
	{
		printf("%d\t", nextnum);
		t1 = t2;
		t2 = nextnum;
		nextnum = t1 + t2;
		i++;
	}while(i<n+1);
}
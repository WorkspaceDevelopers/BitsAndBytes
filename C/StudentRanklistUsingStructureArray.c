#include<stdio.h>

struct student
{
	int rollNumber,marks[3],total;
	char name[20];
};

void main()
{
	int i,j,n;
	struct student st[20], temp;
	printf("Enter the number of students in the ranklist:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;++i)
	{
		st[i].total = 0;
		
		printf("\n\nEnter the name of the student:\t");
		scanf("%s", &st[i].name);
		
		printf("\nEnter the roll number of the student:\t");
		scanf("%d", &st[i].rollNumber);
		
		printf("\nEnter the marks in Physics, Chemistry, Mathematics:\n");
		for(j=0;j<3;j++)
		{
			scanf("%d", &st[i].marks[j]);
			st[i].total += st[i].marks[j];
		}
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(st[j].total>st[j+1].total)
			{
				temp = st[j];
				st[j] = st[j+1];
				st[j+1] = temp;
			}
		}
	}
	
	printf("\nNAME\tR.NO.\tPHY\tCHEM\tMATHS\tTOTAL\n");
	
	for(i=n-1;i>=0;i--)
	{
		printf("%s\t%d\t%d\t%d\t%d\t%d\n", st[i].name,st[i].rollNumber,st[i].marks[0],st[i].marks[1],st[i].marks[2],st[i].total);
	}
		
}
#include<stdio.h>

struct employee
{
	int salary,employeeId;
	char employeeName[25];
}*p;

void main()
{
	struct employee emp[25];
	int i,j,n;
	p=emp;
	
	printf("Enter the number of employees:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		
		printf("\nEnter the details of Employee %d", i+1);
		
		printf("\nName: ");
		scanf("%s",&(p+i)->employeeName);
		
		printf("Employee Id: ");
		scanf("%d",&(p+i)->employeeId);
		
		printf("Salary: ");
		scanf("%d",&(p+i)->salary);
		
	}
	
	printf("\n\nNAME\tEMP_ID\tSALARY\n");
	
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%d\n",(p+i)->employeeName,(p+i)->employeeId,(p+i)->salary);
	}
	
}	
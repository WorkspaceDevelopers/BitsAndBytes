#include<stdio.h>

struct student
{
	int rollNumber,marks[3],total;
	char name[20];
};

void main()
{
	int i;
	struct student st;
	
	printf("Enter the name of the student:\n");
	scanf("%s",&st.name);
	
	printf("\nEnter the roll number of the student:\n");
	scanf("%d",&st.rollNumber);
	st.total = 0;
	printf("\nEnter the marks of Physics, Chemistry and Mathematics\n");
	for(i=0;i<3;i++)
	{
		scanf("%d", &st.marks[i]);
		st.total += st.marks[i];
	}
	
	printf("\nNAME\tR.NO.\tPHY\tCHEM\tMATHS\tTOTAL\n");
	printf("%s\t%d\t%d\t%d\t%d\t%d", st.name,st.rollNumber,st.marks[0],st.marks[1],st.marks[2],st.total);
}
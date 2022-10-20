#include<stdio.h>
#include<math.h>
void main()
{
	float root1,root2,a,b,c,d,x,y;
	
	printf("Enter the values of a, b and c:\n");
	scanf("%f%f%f",&a,&b,&c);
	
	d = ((b*b)-(4*a*c));
	
	if(d>0)
	{
		root1 = (-b+sqrt(d)/(2*a));
		root2 = (-b-sqrt(d)/(2*a));
		
		printf("\nThe roots of the quation are:\n root 1:%f\n root 2:%f",root1,root2);
	}
	
	else if(d==0)
	{
		root1 = -b/(2*a);
		
		printf("\nThe roots of the equation are:\n root 1:%f\n root 2:%f",root1,root1);
	}
	
	else
	{
		x = -b/(2*a);
		y = sqrt(-d)/(2*a);
		
		printf("The roots of the equation are:\n root 1: %f+i%f\n root 2: %f-i%f",x,y,x,y);
	}
}
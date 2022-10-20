#include<stdio.h>
void main()
{
	int num,rev=0,rem;
	printf("Enter the number to be reversed:\n");
	scanf("%d", &num);
	while(num != 0)
	{
		rem = num%10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	printf("\n\nThe reversed number is %d", rev);
}
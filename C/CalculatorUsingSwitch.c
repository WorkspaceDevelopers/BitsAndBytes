#include<stdio.h>
void main()
{
	int a,no1,no2,ans;
	do
	{

		printf("Select the operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\n");
		scanf("%d",&a);
		
		switch(a)
		{
			case 1:
				printf("Enter the two numbers:\n");
				scanf("%d%d",&no1,&no2);
				ans = no1+no2;
				printf("The sum is %d:\n\n",ans);
				break;
			
			case 2:
				printf("Enter the two numbers:\n");
				scanf("%d%d",&no1,&no2);
				ans = no1-no2;
				printf("The difference is %d:\n\n",ans);
				break;
			
			case 3:
				printf("Enter the two numbers:\n");
				scanf("%d%d",&no1,&no2);
				ans = no1*no2;
				printf("The product is %d:\n\n",ans);
				break;
			
			case 4:
				printf("Enter the two numbers:\n");
				scanf("%d%d",&no1,&no2);
				ans = no1/no2;
				printf("The result of division is %d:\n\n",ans);
				break;
			
			case 5:
				printf("Enter the two numbers:\n");
				scanf("%d%d",&no1,&no2);
				ans = no1%no2;
				printf("The modulus is %d:\n\n",ans);
				break;
				
			case 6:
				break;
			
			default:
				printf("Select a valid choice\n\n");
				break;
		}
	}while(a<6);
}
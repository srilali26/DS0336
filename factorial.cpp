#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("Enter the number :");
	scanf("%d",&num);
	if(num>0 )
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("The factorial of %d is %d",num,fact);
	}
	else
		printf("Invalid Input...");
}

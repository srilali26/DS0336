#include<stdio.h>
int main()
{
	int stack[]={1,5,2,3,7,4,9,2},i,top=0,val,choice,n;
	n=sizeof(stack)/sizeof(stack[0]);
	printf("1.Insert \n2.Delete\n");
	scanf("%d",&choice);
	if(choice==1)
	{
	printf("Enter the value :");
	scanf("%d",&val);
	n++;
	for(i=n;i>=top;i--)
	{
		stack[i]=stack[i-1];
	}
	stack[top]=val;
	for(i=0;i<=n-1;i++)
	{
		printf("%d \n",stack[i]);
	}
	}
	else if(choice==2)
	{
		for(i=top-1;i<=n;i++)
		{
			stack[i]=stack[i+1];
		}
		for(i=0;i<n-1;i++)
		{
		printf("%d \n",stack[i]);
		}
	}
	
}

#include<stdio.h>
#define size 5
int main()
{
	int x,stack[size]={1},choice,n,len,top=-1;
	printf("1.Push\n2.Pop\n");
	printf("Enter the choice :");
	scanf("%d",&choice);
	if(choice==1)
	{
		if(top==size-1)
		{
			printf("Overflow");
		}
		else
		{
			printf("Enter the element to push :");
			scanf("%d",&x);
			top=top+1;
			stack[top]=x;
			printf("Elements in stack :");
			for(int i=top;i>=0;--i)
			{
				printf("%d \n",stack[i]);
			}
		}
	}
	else if(choice==2)
	{
		if(top==-1)
		{
			printf("Underflow");
		}
		else
		{
			printf("Element popped...");
			top=top-1;
			printf("Elements in stack :");
			for(int i=top;i>=0;--i)
			{
				printf("%d \n",stack[i]);
			}
		}
	}
	else
	{
		printf("Elements in stack :");
			for(int i=top;i>=0;--i)
			{
				printf("%d \n",stack[i]);
			}
	}
}

#include<stdio.h>
int main()
{
   int a=0, b=1,len, c, sum=0;
	printf("Enter the length of Fibonacci series: ");
   	scanf("%d",&len);
	printf("The fibonacci series is: \t");
   	while( a<=len )
   	{
      printf("%d ",a);
      sum += a;
      c = a + b;
      a = b;
      b = c;
   	}
	printf("\nTheir sum is = %d", sum);
}

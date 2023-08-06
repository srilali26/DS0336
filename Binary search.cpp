#include<stdio.h>
int main()
{
	int low,high,mid,key,n,i,arr[]={1,2,3,4,5,6,7,8,9,10};
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter the value :");
	scanf("%d",&key);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high)
	{
		if(arr[mid]<key)
		{
			low=mid+1;
			mid=(low+high)/2;
		}
		else if(arr[mid]==key)
		{
			printf("Element %d found at %d",key,mid+1);
			break;
		}
		else
		{
			high=mid-1;
			mid=(low+high)/2;
		}
	}
	if(low>high)
	{
		printf("Element not Found...");
	}
	
}

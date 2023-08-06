#include<stdio.h>
int main() 
{
    int n,arr[]={1,6,7,5,9,8,2,4,10,18};
    n=sizeof(arr)/sizeof(arr[0]);
    printf("Even numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            printf("%d ", arr[i]);
    }
 	printf("\nOdd numbers in the array are: ");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==1)
            printf("%d ", arr[i]);
    }
}

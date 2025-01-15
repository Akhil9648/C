#include<stdio.h>
int binarysearch(int arr[],int low,int high,int key)
{
    if(low>high)
    {
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==key)
    {
        return mid;
    }
    else if(arr[mid]>key)
    {
        return binarysearch(arr,low,mid-1,key);
    }
    else
    {
        return binarysearch(arr,mid+1,high,key);
    }
}
int main()
{
	int n,key;
	printf("Enter a number:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter %d array elements in the array:",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nEnter a key:");
	scanf("%d",&key);
	int a=binarysearch(arr,0,n-1,key);
	printf("Key is found at %d position",a+1);
	return 0;
}

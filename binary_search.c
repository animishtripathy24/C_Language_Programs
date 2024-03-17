#include<stdio.h>
int main()
{
	//all the elements must be in ascending order
	int arr[20],low,mid,high,key,n,i,flag=0,position;
	printf("enter the key to be searched");
	scanf("%d",&key);
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enterthe elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==arr[mid])
		{
			flag=1;
			position=mid;
			break;
		}
		else if(key<arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
			
		}
	}
	if(flag)
	{
		printf("the KEY IS FOUND and its position is %d",position);
	}
	else
	{
		printf("the KEY IS NOT FOUND");
	}

	return 0;
}

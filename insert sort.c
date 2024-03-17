//INSERTION SORT
#include<stdio.h>
main()
{
	int n,i,j,temp,arr[20];
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the array before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	//logic for insertion sort
	for (i=1;i<n;i++)//n-1 iterations must be done
	{
		temp=arr[i];
	    for(j=i;j>0&&temp<arr[j-1];j--)//comparing with the previous elements till the index value reaches the 0th index
		{
			arr[j]=arr[j-1];
		}
		arr[j]=temp;//inserting the element at the desired location
	}
	printf("\nthe array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);//sorted array
	}
}

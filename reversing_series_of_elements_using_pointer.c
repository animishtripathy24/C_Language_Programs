#include<stdio.h>
main()
{
	int a[100],i;
	int sum;
	//declaring pointer p
	int *p;
	int n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",a[i]);
	}
	printf("\nthe array elements in decreasing order are:\n");
	//logic for reversing the series of number using pointer.
	for(p=&a[n-1];p>=&a[0];p--)
	{
		printf("\n%d\t",*p);
	}
}

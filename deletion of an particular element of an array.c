#include<stdio.h>
main()
{
	int a[5],i,position,element;
	printf("enter the elements in the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the position to be deleted\n");
	scanf("%d",&position);
	for(i=position;i<5;i++)
	{
		a[i-1]=a[i];
	}
	printf("the elements of the array are");
	for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}
}

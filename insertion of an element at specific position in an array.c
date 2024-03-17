#include<stdio.h>
int main()
{
	int a[6],i,position,element;
	printf("enter the elements in the array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array before inserting is :\n");
	for (i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nenter the position to be inserted\n");
	scanf("%d",&position);
	printf("\nenter the element to be inserted\n");
	scanf("%d",&element);
	for(i=4;i>=position-1;i--)
	{
		a[i+1]=a[i];
	}
	a[position-1]=element;
	printf("now the elements of the array are\n");
	for (i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;
}

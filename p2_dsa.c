#include<stdio.h>
#include<stdlib.h>

int main()
{
	int s,i;
	printf("how many elements required for insertion");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
	int *a,position,element,i,n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	a=(int*)malloc((n)*sizeof(int));
	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("the array before inserting is :\n");
	for (i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\nenter the position to be inserted\n");
	scanf("%d",&position);
	printf("\nenter the element to be inserted\n");
	scanf("%d",&element);
	a=(int*)realloc((n+i),sizeof(int));
	//logic
	for(i=n-1;i>=position-1;i--)
	{
		a[i+1]=a[i];
	}
	a[position-1]=element;
	printf("now the elements of the array are\n");
	for (i=0;i<n+1;i++)
	{
		printf("%d\t",*(a+i));
	}
	}
	return 0;
	
}
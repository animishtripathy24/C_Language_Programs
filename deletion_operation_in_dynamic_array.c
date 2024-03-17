#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,position,i,n;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
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
	printf("\nenter the position to be deleted\n");
	scanf("%d",&position);
	for(i=position;i<n;i++)
	{
		a[i-1]=a[i];
	}
	printf("the elements of the array are\n");
	for(i=0;i<n-1;i++)
	{
		printf("%d\t",*(a+i));
	}
	
	return 0;
}

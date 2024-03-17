#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,position,element,i,n,num;
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
	printf("\nhow many elements to enter\n");
	scanf("%d",&num);
	
	
	for(i=1;i<=num;i++)
	{
	   a=(int*)realloc(a,*sizeof(int));
	   printf("\nenter the position to be inserted\n");
	   scanf("%d",&position);
	   printf("\nenter the element to be inserted\n");
	   scanf("%d",&element);
	
	   //logic
	   for(i=n-1;i>=position-1;i--)
	   {
		   a[i+1]=a[i];
	   }
	   a[position-1]=element;
	}
	printf("the array after insertion is:\n");
	for(i=0;i<=(n+num);i++)
	{
		printf("%5d",*(a+i));
	}
    free(a);
	
	   return 0;
}

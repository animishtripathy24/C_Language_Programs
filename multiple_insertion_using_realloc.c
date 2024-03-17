#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,position,element,i,n,j,k;
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
	printf("\nenter the elements you want to be inserted\n");
	scanf("%d",&j);
	for(i=1;i<=j;i++)
	{
	  a=(int*)realloc(a,(n+i)*sizeof(int));
	  printf("\nenter the position to be inserted\n");
	  scanf("%d",&position);
	  printf("\nenter the element to be inserted\n");
	  scanf("%d",&element);
	
	//logic
	for(k=n+i-2;k>=position-1;k--)
	{
		*(a+k+1)=*(a+k);
	}
	*(a+position-1)=element;
	printf(" the elements of the array after insertion are\n");
	for (k=0;k<n+i;k++)
	{
		printf("%d\t",*(a+k));
	}


	}

	free(a);
	return 0;
}

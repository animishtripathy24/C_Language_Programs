#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *a,position,i,n,k,element,j,l;
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
	printf("\nenter the elements you want to delete...\n");
	scanf("%d",&element);
	for(k=1;k<=element;k++)
	{
		printf("\nenter the position to be deleted\n");
		scanf("%d",&position);
		for(j=position;j<n-k+1;j++)
		{
			a[j-1]=a[j];
		} 
		a=(int*)realloc(a,(n-k)*sizeof(int));
	}
	printf("\nthe elements of the array are\n");
	for(l=0;l<n;l++)
	{
		printf("%d\t",a[l]);
	}
	free(a);
	
	return 0;
}

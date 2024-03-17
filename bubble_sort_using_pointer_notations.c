//using function sort() sort the given elements of the array by using only pointer notation
#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int);
void main()
{
	int *a,n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a+i);
		
	}
	printf("the array before sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",*(a+i));
	}
	sort(a,n);//FUNCTION CALL
	printf("\nthe array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%3d",*(a+i));
	}
	return;
	free(a);
}
void sort(int *a,int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		}
	}
	return;
	
}

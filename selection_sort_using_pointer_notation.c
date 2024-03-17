#include<stdio.h>
#include<stdlib.h>
void selection_sort(int *a,int n)
{
	int i,j,temp,minIndex;
	for(i=0;i<n;i++)
	{
		minIndex = i;
		for(j=i+1;j<n;j++)
		{
			if(*(a+j)<*(a+minIndex))
			{
				minIndex = j;
			}
		}
		temp = *(a+i);
		*(a+i) = *(a+minIndex);
		*(a+minIndex) = temp;
	}
	printf("\nthe array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",*(a+i));
	}
	
	
}

int main()
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
		printf("%5d",*(a+i));
	}	
	selection_sort(a,n);
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int *a,n,i,key,flag,position;
	flag=0;
	position=0;
	printf("enter the size of the array\n\n");
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",a+i);
	}
	printf("enter the key element to be searched in the array\n");
	scanf("%d",&key);
	printf("\nthe elements of the array are-");
	for(i=0;i<n;i++)
	{
		printf("%5d",*(a+i));
	}
	for(i=0;i<n;i++)
	{
		if(key==*(a+i))
		{
			flag=1;
			position=i;
			break;
		}
	}
	if(flag)
	{
		printf("\nkey is found at position= %d",i);
	}
	else
	{
		printf("\nthe key is not found");
	}
}

#include<stdio.h>
main()
{
	int a[10],n,i,j,temp;
	printf("enter the size in the array");
	scanf("%d",&n);
	printf("enter the elements in the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nBEFORE SORTING");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);		
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\n AFTER SORTING");
	for(i=0;i<n;i++)
	{
		printf("\t%d",a[i]);
	}
	
}

//sum of row and column elements of the matrix
#include<stdio.h>
main()
{
	int a[10][10],i,r,c,j,sum;
	printf("enter the rows of the matrix\n");
	scanf("%d",&r);
	printf("enter the columns elements of the array\n");
	scanf("%d",&c);
	printf("enter the elements in the array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the array elements are\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum+=a[i][j];
		}
		printf("sum of %d row is %d",i,sum);
		sum=0;
		printf("\n");
	}
	sum=0;
	for(j=0;j<c;j++)
	{
		for(i=0;i<r;i++)
		{
			sum+=a[i][j];
		}
		printf("sum of %d column is %d",j,sum);
		sum=0;
		printf("\n");
	}
}

//sum of two matrix
#include<stdio.h>
main()
{
	int a[10][10],b[10][10],s[10][10];
	int r,c,i,j;
	printf("enter the rows of the matrix");
	scanf("%d",&r);
	printf("enter the columns of the matrix");
	scanf("%d",&c);
	printf("enter the elements in the first matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements in the second matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
    }
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s[i][j]=a[i][j]+b[i][j];
		}
	} 
	printf("the first matrix is-");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("the second matrix is-");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("the sum of two matrix is-");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",s[i][j]);
		}
		printf("\n");
	}
	
	
}

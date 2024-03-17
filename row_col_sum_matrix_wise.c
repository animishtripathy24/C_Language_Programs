//sum of row and column elements of the matrix
#include<stdio.h>
int main()
{
	int n;
	int a[10][10],i,r,c,j,sumrow,sumcol;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the array elements are\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//row sum
	for(i=0;i<n;i++)
	{
	    sumrow=0;
		for(j=0;j<n;j++)
		{
			sumrow=sumrow+a[i][j];
		}
		a[i][j]=sumrow;
	}
	for(j=0;j<n;j++)
	{
	    sumcol=0;
		for(i=0;i<n;i++)
		{
			sumcol=sumcol+a[i][j];
	    }
        a[i][j]=sumcol;
	}
	a[i][j]=0;


	//displaying the resultant matrix
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}


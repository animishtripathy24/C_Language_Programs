//sum of row and column elements of the matrix
#include<stdio.h>
main()
{
	int a[4][4],i,r,c,j,sumrow,sumcol;
	printf("enter the elements in the array\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the array elements are\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	//row sum
	for(i=0;i<3;i++)
	{
	    sumrow=0;
		for(j=0;j<3;j++)
		{
			sumrow=sumrow+a[i][j];
		}
		a[i][j]=sumrow;
	}
	for(j=0;j<3;j++)
	{
	    sumcol=0;
		for(i=0;i<3;i++)
		{
			sumcol=sumcol+a[i][j];
	    }
        a[i][j]=sumcol;
	}
	a[4][4]=0;


	//displaying the resultant matrix
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
}

#include<stdio.h>
void main()
{
	int a[100][100],i,j,r,c,flag;
	printf("enter the rows of the given matrix\n\n");
	scanf("%d",&r);
	printf("enter the columns of the matrix\n\n");
	scanf("%d",&c);
	if(r==c)
	{
	printf("enter the elements in the matrix\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the input matrix is---\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<i;j++)
		{
           if(a[i][j]==0)
           {
           	flag=1;
           	
		   }
		   else
		   {
		   	flag=0;
		   }
		}
	}
	if(flag)
	{
		printf("\n\nthe given matrix is a upper triangular matrix");
	}
	else
	{
		printf("\n\nthe given matrix is not a upper triangular matrix");
	}
  }
  else
  {
  	printf("the given matrix is not a square matrix");
  }	
	
}

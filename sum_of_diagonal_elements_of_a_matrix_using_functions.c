#include<stdio.h>
#define rows 100
#define cols 100
void main()
{
	int  diag_sum(int a[][cols],int m,int n);
	int r,c,row,col,a[rows][cols],sum=0;
	printf("enter the rows of the matrix");
	scanf("%d",&r);
	printf("enter the columns of the matrix");
	scanf("%d",&c);
	if(r==c)
	{
	printf("enter the elements in the matrix");
	for(row=0;row<r;row++)
	{
		for(col=0;col<c;col++)
		{
			scanf("%d",&a[row][col]);
		}
	}
	printf("*****The entered matrix is****\n");
	for(row=0;row<r;row++)
	{
		for(col=0;col<c;col++)
		{
			printf("%4d",a[row][col]);
		}
		printf("\n");
	}
	sum=diag_sum(a,r,c);
	printf("the sum of diagonal elements of the matrix is %d",sum);
    }
    else
    {
    	printf("THE MATRIX IS NOT A SQUARE MATRIX");
	}
}
	int diag_sum(int b[][cols],int m,int n)
	{
		int i,j,sum;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					sum=sum+b[i][j];
				}
			}
		}
		return sum;
	}


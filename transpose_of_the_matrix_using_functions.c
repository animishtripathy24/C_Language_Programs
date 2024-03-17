//transpose of the matrix using transpose_matrix() function
#include<stdio.h>
void main()
{
	int a[100][100];
	void transpose_matrix(int a[][100],int m,int n);//function declaration
	int i,j,r,c;
	printf("enter the rows of the matrix\n");
	scanf("%d",&r);
	printf("enter the columns of the matrix\n");
	scanf("%d",&c);
	printf("enter the elements in the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the entered matrix is\n\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	transpose_matrix(a,r,c);//function call
}//end of main
void transpose_matrix(int a[][100],int m,int n)//function definition
{
	int b[100][100],i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
			
		}
	}
	printf("the transposed matrix is\n\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%5d",b[i][j]);
		}
		printf("\n");
	}
}

//transpose of a matrix using recursion
#include<stdio.h>
void display(int a[][100],int,int);
void transpose(int a[][100],int,int);
void main()
{
	int a[100][100],r,c,i,j;
	printf("enter the rows of the matrix\n");
	scanf("%d",&r);
	printf("enter the columns of the matrix\n");
	scanf("%d",&c);
	printf("enter the elements in the array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the source matrix is\n");
	display(a,r,c);
	printf("the transpose of the matrix is\n");
	transpose(a,r,c);
	return;
}
void transpose(int a[][100],int m,int n)
{
	void display(int a[][100],int m,int n);
	int i,j,b[100][100];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	display(b,n,m);
}
void display(int a[][100],int m,int n){
int i,j;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%5d",a[i][j]);
	}
	printf("\n");
}
}

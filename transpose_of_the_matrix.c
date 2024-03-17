//transpose of the matrix
#include<stdio.h>
main()
{
	int a[10][10],t[10][10],r,c,i,j;
	printf("enter the size of the array\n");
	scanf("%d\n%d",&r,&c);
	printf("enter the elements in the array\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	//LOGIC FOR TRANSPOSE OF THE MATRIX
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("the matrix a-");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose of matrix a is-");
	for(i=0;i<r;i++)
	{ 
		for(j=0;j<c;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	
	
}

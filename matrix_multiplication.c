/*MATRIX MULTIPLICATION*/
#include<stdio.h>
main()
{
	int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
	printf("enter the rows and columns of a");
	scanf("%d%d",&r1,&c1);
	printf("enter the rows and columns of b");
	scanf("%d%d",&r2,&c2);
	if(c1==r2)
	{
		//reading elements in matrix a
		printf("enter the elements in the array a");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		//reading elements in matrix b
		printf("enter the elements in the array b");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		//multiplication logic
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<r2;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
        //printing matrix a
	    printf("the marix a is-");
	    for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d",a[i][j]);
			}
			printf("\n");
		}
		//printing matrix b
		printf("the matrix b is-");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		//printing matrix c
		printf("the matrix c is-");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d",c[i][j]);
			}
			printf("\n");
		}
    } 
    else
	{
		printf("MATRIX MULTIPLICATION CANNOT BE DONE");
	}
}

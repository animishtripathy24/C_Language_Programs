//upper,lower and diagonal elements of the matrix
#include<stdio.h>
main()
{
	int a[10][10],i,j,r,c;
	printf("enter the rows and columns of the matrix");
	scanf("%d%d",&r,&c);
	printf("enter the elements in the array");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	if(r==c)
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(i<j)
				{
					printf("upper triangle elements are\n");
					printf("%d\n",a[i][j]);
					
				}
				else if(i>j)
				{
					printf("the lower triangle elements are\n");
					printf("%d\n",a[i][j]);
					
				}
				else
				{
					printf("the diagonal elements are\n");
					printf("%d\n",a[i][j]);
					
				}
			}
		}
	}
	printf("the matrix is-\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		    
	    }
	    printf("\n");
	}
	
}

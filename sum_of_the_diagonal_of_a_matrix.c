//sum of diagonal elements of the matrix 
#include<stdio.h>
main()
{
	int i,j,sum=0,a[3][3];
	printf("enter the elements in the array");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("sum of the diagonal elements=%d",sum);
}

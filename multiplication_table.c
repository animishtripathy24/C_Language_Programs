#include<stdio.h>
main()
{
	int n,i,j,product;
	printf("enter the value of n\n\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=10;j++)
		{
			product=i*j;
			printf("\nthe product of %d and %d is %d\n",i,j,product);
		}
		printf("\n");
	}
	printf("\t");
	
}

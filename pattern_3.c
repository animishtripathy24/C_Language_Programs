#include<stdio.h>
main()
{
	int n,i,j,x;
	printf("enter the number of rows");
	scanf("%d",&n);
	x=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",x);
			x++;
			
		}
		printf("\n");
	}
}

#include<stdio.h>
main()
{
	int i,j,x,n;
	printf("enter the value of n");
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

#include<stdio.h>
main()
{
	int n,i,j,flag=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			flag=0;
			if(i%j==0)
			{
				flag=flag+1;
			}
		}
	}
	if(flag==2)
	{
		printf("%d is prime",i);
	}
	else
	{
		printf("%d is non prime",i);
	}
}

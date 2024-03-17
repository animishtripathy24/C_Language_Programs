#include<stdio.h>
main()
{
	int i,sum,n;
	printf("enter the value of n");
	scanf("%d",&n);
	sum=0;
	i=2;
	if(n==0)
	{
		goto last;
	}
	else
	{
		goto repeat;
	}
    loop:sum=sum+i;
    i+=2;
    goto repeat;
	repeat:if(i<=2*n)
	{
		goto loop;
	}
	else
	{
		goto last;
	}
	last:printf("sum of %d even natural numbers is %d",n,sum);
}

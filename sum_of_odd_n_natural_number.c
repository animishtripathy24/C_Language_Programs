#include<stdio.h>
main()
{
	int n,i,sum;
	printf("enter the value of n");
	scanf("%d",&n);
	sum=0;
    if(n==0)
    {
        goto last;
    }
	i=1;
	int s=2*n;
    loop:
	sum=sum+i;
	i=i+2;
	goto repeat;
    repeat:if(i<(s+1))
	{
		goto loop;
	}
	else
	{
		goto last;
	}
	last:printf("sum of %d odd natural number is\n%d",n,sum);
}

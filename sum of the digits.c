#include<stdio.h>
main()
{
	int n,r,s;
	printf("enter the value of n");
	scanf("%d",&n);
	s=0;
	while(n!=0)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("sum of the digits=%d",s);
}

#include<stdio.h>
main()
{
	int n,rev,r;
	printf("enter the digit to be reversed\n");
	scanf("\n%d",&n);
	rev=0;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("the reversed digit is %d",rev);
}

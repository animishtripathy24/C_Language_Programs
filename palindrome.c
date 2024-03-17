#include<stdio.h>
main()
{
	long int n,r,rev,temp;
	printf("enter the number\n");
	scanf("%ld",&n);
	rev=0;
	temp=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==temp)
	{
		printf("%ld is palindrome",temp);
	}
	else
	{
		printf(" %ld is not palindrome",temp);
	}
}


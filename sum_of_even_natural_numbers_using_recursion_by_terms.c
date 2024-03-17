//program to find sum of even natural numbers using recursion
#include<stdio.h>
int sum_of_even(int);
void main()
{
	int n,a,s;
	printf("enter the value of n\n\n");
	scanf("%d",&n);
	a=2*n;
	s=sum_of_even(a);
	printf("sum of even natural numbers=%d",s);
	return;
}
int sum_of_even(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		return n+sum_of_even(n-2);
	}
}

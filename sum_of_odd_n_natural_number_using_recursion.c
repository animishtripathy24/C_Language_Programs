//program to find sum of odd natural numbers using recursion
#include<stdio.h>
int sum_of_odd(int);
void main()
{
	int n,a,s;
	printf("enter the value of n\n");
	scanf("%d",&n);
	a=2*n-1;
	s=sum_of_odd(a);
	printf("sum of odd natural numbers =%d",s);
	return;
}
int sum_of_odd(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n+sum_of_odd(n-2);
	}
}

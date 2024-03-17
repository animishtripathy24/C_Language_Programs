//to calculate power using recursion
#include<stdio.h>
int power(int,int);
main()
{
	int base,a,result;
	printf("enter the base value");
	scanf("%d",&base);
	printf("enter the power number");
	scanf("%d",&a);
	result=power(base,a);
	printf("the result of %d^%d is %d",base,a,result);
}
power(int base,int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return base*power(base,a-1);
	}
}

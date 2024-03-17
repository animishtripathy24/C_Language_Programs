#include<stdio.h>
add(int,int);
sub(int,int);
mul(int,int);
div(int,int);
main()
{
	int a,b;
	int sum=0,diff=0,prod=0,divi=0;
	scanf("%d%d",&a,&b);
	sum=add(a,b);
	diff=sub(a,b);
	prod=mul(a,b);
	divi=div(a,b);
	printf("%d\t%d\t%d\t%d",sum,diff,prod,divi);
	
}
add(int x,int y)
{
	return x+y;
}
sub(int x,int y)
{
	return x-y;
}
mul(int x,int y)
{
	return x*y;
}
div(int x,int y)
{
	return x/y;
}


#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d\n%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("final a and b are %d\n%d",a,b);
}

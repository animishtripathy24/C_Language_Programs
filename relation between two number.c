/*WAP to find relation between two values*/
#include<stdio.h>
main()
{
	int a,b;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("the values are equal");
	}
	else if(a>b)
	{
		printf("a is greater than b");
	}
	else 
	{
		printf("b is greater than a");
	}
}

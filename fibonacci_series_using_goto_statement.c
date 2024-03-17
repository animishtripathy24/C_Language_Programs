#include<stdio.h>
main()
{
	int a,b,c,n,i;
	i=3;
	a=0;
	b=1;
	printf("enter the value of n");
	scanf("%d",&n);
    printf("%d\t%d",a,b);
	loop:if(i<=n)
	{
		c=a+b;
		printf("\t%d",c);
		a=b;
		b=c;
		i=i+1;
		goto loop;
	}



}

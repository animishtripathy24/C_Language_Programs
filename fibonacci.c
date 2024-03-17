/*WRITE A PROGRAM TO PRINT FIBONACCI SREIES*/
#include<stdio.h>
main()
{
	int a,b,n,c,i;
	printf("enter value of n=");
	scanf("%d",&n);
	a=0;
	b=1;
    printf("%d\t%d\t",a,b);
	for(i=3;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}

    

}

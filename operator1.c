#include<stdio.h>//header file
main()
{
    int a,b;//declaration of variables
	char c;
    printf("enter an operator\n");
	scanf("%c",&c);
	printf("enter the first number");
	scanf("%d",&a);
	printf("enter the second number");
	scanf("%d",&b);

	if(c=='+')
	{
		c=a+b;
		printf("sum =%d",c);
	}
	else if(c=='-')
	{
		printf("Difference=%d",(a-b));
	}
	else if(c=='*')
	{
		printf("Product=%d",(a*b));
	}
	else if(c=='/')
	{
		printf("Quotient=%d",(a/b));
	}
	else if(c=='%')
	{
		printf("Remainder=%d",(a%b));
	}
	else
	{
		printf("\n\nINVALID OPERATOR");
	}
}

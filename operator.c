/*WAP which accepts any two number and an operator and display the result*/
#include<stdio.h>
void main()
{
	int a,b,c;
	char op;
    printf("enter the operator");
	scanf("%c",&op);
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number\n");
	scanf("%d",&b);

	switch(op)
	{
		case'+':c=a+b;printf("sum=%d",c);break;
		case'-':c=a-b;printf("difference=%d",c);break;
		case'*':c=a*b;printf("product=%d",c);break;
		default:printf("ENTER ONLY +,-,*,/,%");break;
	}
}

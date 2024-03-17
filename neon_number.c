//Logic:

//SQUARE OF A NUMBER
//SUM OF INDIVIDUAL DIGITS OF A SQUARE
//COMPARE SUM WITH THE NUMBER
//EXAMPLE N=9 SQUARE IS 81 AND SUM OF 8 AND 1 IS 9 THEN 9 IS A NEON NUMBER


#include<stdio.h>
main()
{
	int n,sqr,digit,sum=0,temp;
	scanf("%d",&n);
	sqr=n*n;
	while(sqr>0)
	{
		digit=sqr%10;
		sum=sum+digit;
		sqr=sqr/10;
	}
if(sum==n)
{
	printf("%d is a neon number",n);
}
else
{
	printf("%d is not neon number",n);
}	
}

//if the sum of all the individual digits and product of all individual digits are equal ,then we can say that the number is a spy number.
//example=1124,132   1+1+2+4=9,  1*1*2*4=9

//steps:

//find individual digits n%10
//reduce the number  n//10(for python)
//sum and product of all the individual digits.

//another method

//n='123'
//for i in n:
//sum+=int(i)
//product+=int(i)

#include<stdio.h>
main()
{
	int sum,prod,n,temp,digit;
	sum=0;
	prod=1;
	printf("enter the value for n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		digit=n%10;
		sum=sum+digit;
		prod=prod*digit;
		n=n/10;
	}
if(sum==prod)
{
	printf("%d is a SPY NUMBER",temp);
}
else
{
	printf("%d is not SPY NUMBER",temp);
}	
}

//if the sum of factorial of individual digits is equal to that given number then the given number is known as strong number
//example=145

//Logic involved

//identify individual digits
//find factorial for digits
//sum of all factorial of individual digits
#include<stdio.h>
main()
{
	int n,sum,fact,digit,temp,i;
	printf("enter the value of n");
	scanf("%d",&n);
	temp=n;
	sum=0;
	fact=1;
	while(n>0)
	{
		digit=n%10;
		for(i=1;i<=digit;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
if(sum==temp)
{
	printf("%d is a strong number",temp);
}
else
{
	printf("%d is not strong number",temp);
}	
}

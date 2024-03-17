//program to evaluate GCD of two numbers 

#include<stdio.h>//header file
int gcd(int ,int);//function declaration
main()
{
	int n1,n2,s;//declaration of variables
	printf("enter the first number\n");
	scanf("%d",&n1);
	printf("enter the second number\n");
	scanf("%d",&n2);
	s=gcd(n1,n2);//function call
	printf("the gcd of two numbers is %d",s);//printing the gcd calculated
}//end of main
gcd(int a,int b)//function definition
{
	if(b==0)
	{
		return a;//exit condition
	}
	else
	{
		return gcd(b,a%b);//based on euclid's algorithm of finding the gcd of two numbers.
	}
}

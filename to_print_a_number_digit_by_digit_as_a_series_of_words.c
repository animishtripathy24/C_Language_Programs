//wap to read a number n,and print it out digits by digits as a series of words
#include<stdio.h>
main()
{
	int n,digits,rev,rem;//variable declarations
	printf("\nenter the value of n\n");
	scanf("%d",&n);
	rev=0;
	while(n>0)//reversing the number
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	while(rev>0)//logic of the program
	{
		digits=rev%10;
		if(digits==0)
		{
			printf("zero");
		}
		else if(digits==1)
		{
			printf(" one");
		}
		else if(digits==2)
		{
			printf(" two");
		}
		else if(digits==3)
		{
			printf(" three");
			
		}
		else if(digits==4)
		{
			printf(" four");
		}
		else if(digits==5)
		{
			printf(" five");
		}
		else if(digits==6)
		{
			printf(" six");
		}
		else if(digits==7)
		{
			printf(" seven");
		}
		else if(digits==8)
		{
			printf(" eight");
		}
		else if(digits==9)
		{
			printf(" nine");
		}
		else
		{
			printf("invalid operator");
		}
		rev=rev/10;
	}
	
}

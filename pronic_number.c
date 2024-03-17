//WAP TO FIND PRONIC NUMBER PROGRAM IN PYTHON

//The product of two consecutive number is equal to that number.example- 1) 6=2*3    2)12=3*4   3)20=4*5

// logic: we have to iterate from 1 to n+1 and the multiplying as n*(n+1)==n and the break.
#include<stdio.h>
main()
{
	int n,flag,i;
	flag=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n+1;i++)
	{
		if(i*(i+1)==n)
		{
			flag=1;
			break;
			
		}
	}
if(flag==1)
{
	printf("%d is a PRONIC NUMBER",n);
}
else
{
	printf("%d is not a PRONIC NUMBER",n);
	}	
}

#include<stdio.h>
#include<math.h>
main()
{
	long int n,d,s,t;
	printf("enter the value of n");
	scanf("%d",&n);
	s=0;
	t=0;
	while(n!=0)
	{
		d=n%10;
		if(d%2==0)
		{
			s=s+pow(d,2);
		}
		else
		{
			t=t+pow(d,3);
		}
		n=n/10;
		
	}
	printf("sum of square of its even digits is %d",s);
	printf("\nsum of cube of its odd digits is %d",t);
	
}

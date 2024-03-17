#include<stdio.h>
main()
{
	int n,i,max,num;
	i=1;max=0;
	printf("enter how many numbers\n");
	scanf("%d",&n);
	repeat:if(i<=n)
	{
		goto loop;
	}
	else
	{
		goto last;
	}
	loop:printf("enter the numbers\n");
	     scanf("%d",&num);
	     if(num>=max)
	     {
		     max=num;
		     i=i+1;
		     goto repeat;
	     }
	     else
	     {
	     	i=i+1;
		    goto repeat;
	     }

	last: printf("greatest number is %d",max);
	
}

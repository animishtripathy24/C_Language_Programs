#include<stdio.h>
main()
{
	int i,n,flag=0; 
	printf("enter the value to be checked");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			flag=flag+1;
		}
	}
	if(flag==2)
	{
		printf("%d is the prime number",n);
	}
	else
	{
		printf("%d is not prime number",n);
	}
}

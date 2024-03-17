#include<stdio.h>
#include<math.h>
void main()
{
	int n,t,temp,digit,count=0,sum=0,rem;
	scanf("%d",&n);
	t=n;
	temp=n;
	while(n!=0)
	{
		digit=n%10;
		count=count+1;
		n=n/10;
	}
	while(t!=0)
	{
		rem=t%10;
		sum=sum+pow(rem,count);
		t=t/10;
	}
	if(sum==temp)
	{
		printf("%d is armstrong number",temp);
	}
	else
	{
		printf("%d is not armstrong number",temp);
	}
}

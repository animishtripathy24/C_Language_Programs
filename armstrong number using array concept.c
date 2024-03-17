#include<stdio.h>
#include<math.h>
main()
{
	int n,t,i,j,rem,sum=0,a;
	scanf("%d",&n);
	t=n;
	i=0;
	while(n!=0)
	{
		rem=n%10;
		a[i]=rem;
		i=i+1;
		n=n/10;
	}
	for(j=0;j<=i;j++)
	{
		sum=sum+pow(a[i],i);
	}
	if(sum==t)
	{
		printf("%d is armstrong number",t);
	}
	else
	{
		printf("%d is not an armstrong number",t);
	}
}

#include<stdio.h>
#include<math.h>
void main()
{
	int i,n,sum=0,r;
	printf("enter the number to be converted");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*(1<<i);
		n=n/10;
		i++;
		
	}
	printf("%d",sum);

	
}

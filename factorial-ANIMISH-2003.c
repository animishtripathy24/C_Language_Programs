/*wap to find factorial value of agiven number*/
#include<stdio.h>
int main()
{
	int i,f,n;
	printf("enter value of n");
	scanf("%d",&n);
	i=1;
	f=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("factorial is %d",f);
}

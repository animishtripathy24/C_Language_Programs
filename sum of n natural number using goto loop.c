#include<stdio.h>
void main()
{
	int n,i;
	int sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	loop:sum=sum+i;
	i++;
	if(i<=n)
	{
		goto loop;
	}
	printf("%d",sum);

}

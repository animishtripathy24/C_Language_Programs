/*wap to convert decimal to binary*/
#include<stdio.h>
void main()
{
	int binary[100],i,j,n;
	printf("enter the value to be converted");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		binary[i]=n%2;
		n=n/2;
		i=i+1;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",binary[j]);
	}
}

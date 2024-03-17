#include<stdio.h>
main()
{
	int n,i,j,octal[100];
	printf("enter the value to be converted\n");
	scanf("%d",&n);
	i=0;
	while(n>0)
	{
		octal[i]=n%8;
		n=n/8;
		i=i+1;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",octal[j]);
	}
}

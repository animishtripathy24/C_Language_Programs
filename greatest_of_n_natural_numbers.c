#include<stdio.h>
main()
{
	int n,i,num,large=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter number\t%d\n",i+1);
		scanf("%d",&num);
		if(num>large)
	    {
		large=num;
	    }
	}

	printf("\n\nthe largest numbers is\t%d",large);
}

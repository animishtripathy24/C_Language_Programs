#include<stdio.h>
main()
{
	int a[5]={10,20,30,40,50};
	int key,position,flag=0,i;
	printf("enter the key to be searched");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==a[i])
		{
			flag=flag+1;
			position=i;
			break;
		}
	}
	if(flag==1)
	{
		printf("key is found\n");
		printf("%d is the position of the searched key",position);
	}
	else
	{
		printf("the key is not found");
	}
}

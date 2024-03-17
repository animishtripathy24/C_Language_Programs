#include<stdio.h>
main()
{
	char string[100];
	int i,scount;
	printf("enter the string");
	gets(string);
	for(i=0;string[i]!="\0";i++)
	{
		if(string[i]==" ")
		{
			scount++;
		}
	}
printf("spaces=%d",scount);
printf("words=%d",scount+1);	
	
}

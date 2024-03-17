#include<stdio.h>
#include<string.h>
void main()
{
	char s[10];
	int i,flag=0,len;
	printf("enter the string\n");
	gets(s);
	len=strlen(s);
	for(i=0;i<len-1;i++)
	{
		if(s[i]!=s[len-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("the string is not palindrome");
	}
	else
	{
		printf("the string is palindrome");
	}
	
}


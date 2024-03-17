#include<stdio.h>
main()
{
	char s1[50];
	char s2[50];
	int i;
	printf("enter the string of s1");
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		s2[i]=s1[i];
		
	}
	puts(s1);
	printf("\n");
	puts(s2);
}

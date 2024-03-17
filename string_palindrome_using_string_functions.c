#include<stdio.h>
#include<string.h>
main()
{
	char name[100];
	char name_1[100];
	printf("enter the number to be checked\n");
	gets(name);
	strcpy(name_1,name);
	strrev(name_1);
	if(strcmp(name,name_1)==0)
	{
		printf("\nIt is palindrome");
	}
	else
	{
		printf("\nIt is not palindrome");
	}
	
	
}


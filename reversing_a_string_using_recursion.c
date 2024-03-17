//program for reversing a string using recursion
#include<stdio.h>
void main()
{
	void revstr();
    printf("enter the string");
	revstr();
	return;
		
}
void revstr(void)
{
	char ch;
	if((ch=getchar())!='\n')
	   revstr();
	putchar(ch);
	return;
}

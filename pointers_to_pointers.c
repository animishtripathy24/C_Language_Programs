#include<stdio.h>


int main()
{
	int x=10;
	int *ptr,**ptr1;
	ptr = &x;
	ptr1= &ptr;
	printf("the value of x is: %d",**ptr1);
}

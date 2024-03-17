#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE];
int top=-1;
void push(int element)
{
	if(top==SIZE-1)
	   printf("OVERFLOW");
	else
	{
		top++;
		stack[top]=element;
	}       
}

void display()
{
	int i;
	if(top!=-1)
	{
		for(i=top;i>=0;i++)
		{
		   printf("%d",stack[i]);	
		}
	}
}
int main()
{
	//adding elements in the stack
	push(10);
	push(20);
	
	//displaying the elements
	display();
	
}

#include<stdio.h>

void reverse(char name[],int n)
{
	char temp;
	int start = 0;
	int end = n-1;
	while(start<=end)
	{
	   temp=name[start];
	   name[start]=name[end];
	   name[end]=temp;
	   start++;
	   end--;
	}
}

int getLength(char name[])
{
	int i=0;
	int count =0;
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	return count;
}
void main()
{
	char name[20];
	printf("Enter the name to be reversed\n");
	gets(name);
	int len=getLength(name);
	printf("the length of the string is %d",len);
	reverse(name,len);
	printf("\nThe name after reversal is :\n");
	puts(name); 
	
}

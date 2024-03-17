//wap to convert decimal number into its binary,octal and hexadecimal equivalent.
#include<stdio.h>
void main()
{
	int n,r,i,j,arr[100],rem;
	char arr_1[100];//character array for storing hexadecimal 
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the base value 2,8 or 16\n");
    scanf("%d",&r);
    if(r==2)
    {
    i=0;
	while(n>0)
	{
		arr[i]=n%r;
		n=n/r;
		i=i+1;
	}
	printf("\nthe binary equivalent of the given decimal number is\t");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
	}
	else if(r==8)
	{
	i=0;
	while(n>0)
	{
		arr[i]=n%r;
		n=n/r;
		i=i+1;
	}
	printf("\nthe octal equivalent of the given decimal number is\t");
	for(j=i-1;j>=0;j--)
	{
		printf("%d",arr[j]);
	}
    }
	else if(r==16)
	{
		i=0;
		while(n>0)
		{
			rem=0;
			rem=n%r;
			if(rem<10)
			{
				arr_1[i]=rem+48;//as from 48 onwards we have digits in ascii code table till 57
				i=i+1;
			}
			else
			{
			   arr_1[i]=rem+55;//as from 65 onwards we have alphabets in uppercase in ascii table	
			   i=i+1;
			}
		n=n/r;	
		}
		printf("\nthe hexadecimal equivalent of the given number is\t");
		for(j=i-1;j>=0;j--)
		{
		   printf("%c",arr_1[j]);//character array to print hexadecimal	
		}
	}
	else
	{
		printf("INVALID r VALUE");
	}
}

/*TOWERS OF HANOI*/
#include<stdio.h>
void towers(int,char,char,char);
void main()
{
	int n;
	char a,b,c;
	printf("enter the number of disks");
	scanf("%d",&n);
	printf("the sequence of moves involved in the towers of hanoi are: \n");
	towers(n,'a','c','b');
	
}
void towers(int n,char s,char d,char a)
{
	//logic of the program
	if(n==1)
	{
		printf("\nmove disk1 from %c to %c",s,d);
		return;
	}
	towers(n-1,s,a,d);
	printf("\nmove disk%d from %c to %c",n,s,d);
	towers(n-1,a,d,s);
}

#include<stdio.h>
struct complex
{
	int real;
	int img;
}
main()
{
	struct complex a,b,c;
	//input
	printf("enter the real and imaginary part of a\n");
	scanf("%d%d",&a.real,&a.img);
	printf("enter the real and imaginary part of b\n");
	scanf("%d%d",&b.real,&b.img);
	//addition of real and imaginary part
	c.real=a.real+b.real;
	c.img=a.img+b.img;
	//output
	if(c.img>=0)
	{
		printf("The complex number is\t%d+%d(i)",c.real,c.img);
	}
	else
	{
		printf("the complex number is\t%d-%d(i)",c.real,c.img);
	}
}


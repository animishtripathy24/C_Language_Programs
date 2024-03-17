#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d,r1,r2,ir1,ir2;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		printf("the roots of the given quadratic equations are real and distinct");
		r1=(-b+sqrt(d))/2*a;
		r2=(-b-sqrt(d))/2*a;
		printf("\nthe roots are %d and %d",r1,r2);
	}
	else if(d==0)
	{
		printf("the roots are real and equal");
		r1=r2=-b/2*a;
		printf("the roots are %d and %d",r1,r2);
	}
	else
	{
		printf("the roots are imaginary");
		r1=-b/2*a;
		ir1=sqrt(-d)/2*a;
		ir2=-ir1;
        printf("\nthe imaginary roots are %d+%di and %d-%di",r1,ir1,r1,ir2);
		
	}
	
}

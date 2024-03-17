#include<stdio.h>
main()
{
	int r,n,m1,m2,m3,m4,m5,t,p;
	scanf("%f%f%f%f%f%f%f%f%f",&r,&n,&m1,&m2,&m3,&m4,&m5);
	t=m1+m2+m3+m4+m5;
	p=(t*100)/500;
	if(p>=90)
	{
		printf("excellent");
	}
	else if(p<90,p>=80)
	{
		prinf("very good");
	}
	else if(p<80,p>=60)
	{
		printf("good");
	}
	else if(p<60,p>=40)
	{
		printf("satisfactory");
	}
	else(p<40)
	{
		printf("unsatisfactory");
	}
}

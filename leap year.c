#include<stdio.h>
main()
{
	int year,year_1,year_2,i;
	printf("enter the year to be checked\n");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || (year%400==0))
	{
		printf("\n%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
		
	}
	printf("\nenter the lower limit of the year\n");
	scanf("%d",&year_1);
	printf("\nenter the upper limit of the year\n");
	scanf("%d",&year_2);
	for(i=year_1;i<year_2;i++)
	{
		if(i%4==0)
		{
			 if(i%100!=0)
			 {
			 	printf("\n%d is a leap year\n",i);
			 }
			 if(i%400==0)
			 {
			 	printf("\n%d is a leap year\n",i);
			 }
		}
	}
}

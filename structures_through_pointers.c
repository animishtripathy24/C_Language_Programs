#include<stdio.h>
struct student
{
	int rollno;
	char name[20];
	float perc;
}
main()
{
	struct student s1,*ptr;
	ptr=&s1;
	printf("enter the rollno");
	scanf("%d",&s1.rollno);
	printf("enter the name of the student");
	scanf("%s",s1.name);
	printf("enter the percentage");
	scanf("%f",&s1.perc);
	printf("the rollno. of the student is\t%d",ptr->rollno);
	printf("\nname\t%s",ptr->name);
	printf("\npercentage\t%f",ptr->perc);
}

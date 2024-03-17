#include<stdio.h>
struct dob
{
	int day;
	int month;
	int year;
};
struct student
{
	int id;
	char name[20];
	struct dob d1;
};
main()
{
	struct student s1;
	printf("enter id of the student\n");
	scanf("%d",&s1.id);
	printf("enter the name of the student\n");
	scanf("%s",s1.name);
	printf("enter the date of birth\n");
	scanf("%d%d%d",&s1.d1.day,&s1.d1.month,&s1.d1.year);
	printf("the id of the student is\t%d",s1.id);
	printf("\nthe name of the student is\t%s",s1.name);
	printf("\nthe date of birth of the student is\t%d-%d-%d",s1.d1.day,s1.d1.month,s1.d1.year);
}

#include<stdio.h>
struct student
{
	int id;
	char name[20];
	float perc;
	
};
main()
{
	struct student s1,s2;
	printf("enter the details of s1");
	scanf("%d%s%f",&s1.id,&s1.name,&s1.perc);
    printf("enter the details of s2");
	scanf("%d%s%f",&s2.id,&s2.name,&s2.perc);
	printf("details of student s1 are-\n");
	printf("student_id=%d\tstudent_name=%s\tstudent_percentage=%f\t",s1.id,s1.name,s1.perc);
	printf("details of student s2 are-\n");
	printf("student_id=%d\tstudent_name=%s\tstudent_percentage=%f\t",s2.id,s2.name,s2.perc);
	
	
	
}

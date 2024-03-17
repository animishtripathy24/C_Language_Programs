//ARRAY OF STRUCTURE
#include<stdio.h>
struct employee
{
	char name[20];
	int eid;
	int salary;
};
int main()
{
	int i;
	struct employee emp[10];
	printf("\nenter the employee details\n");
	for(i=0;i<2;i++)
	{
		printf("\nenter the employee name\n");
		scanf("\n%s",&emp[i].name);
		printf("\nenter the enmployee id\n");
		scanf("\n%d",&emp[i].eid);
		printf("\nenter the employee salary\n");
		scanf("\n%d",&emp[i].salary);
	}
	printf("the employee details are");
	for(i=0;i<2;i++)
	{
		printf("the employee name is\t%s",emp[i].name);
		printf("the employee id is\t%d",emp[i].eid);
		printf("the employee salary is\t%d",emp[i].salary);
		
	}

	return 0;
	
}

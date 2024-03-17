/*wap to find whether the person is eligible for vote or not*/
#include<stdio.h>
main()
{
	int age;
	printf("ENTER THE AGE OF THE PERSON!!");
	scanf("%d",&age); 
	if(age>=18)
	{
		goto VOTE;
	}
	else
	{
		printf("NOT ELIGIBLE FOR VOTE!!"); 
	}
	VOTE: printf("THE PERSON IS ELIGIBLE FOR VOTE!!");
	
}

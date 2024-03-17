#include<stdio.h>
main()
{
	int a,b,c,largest;
	printf("enter the value of a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	printf("enter the value of c");
	scanf("%d",&c);
	largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("the greatest among three numbers is %d",largest);
}

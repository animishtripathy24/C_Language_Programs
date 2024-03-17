/*pointers to functions*/
#include<stdio.h>
add(int,int,int)
main()
{
    int a,b,sum=0;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    add(&a,&b,&sum);
}
add(int*a,int*b,int*sum)
{
    *sum=*a+*b;
    printf("sum=%d",*sum);
}

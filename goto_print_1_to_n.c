#include<stdio.h>
main()
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    i=1;
    loop: printf("%d\n",i);
        i++;
    if(i<n)
    {
        goto loop;
    }    
}
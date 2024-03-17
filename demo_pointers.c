#include <stdio.h>
#include<string.h>
void print(char *s,char *t)
{
    unsigned int c=0;
    int len=((strlen(s)-strlen(t))>c)?strlen(s):strlen(t);
    printf("\n%d\n",len);
}

int main() {
    char *x="abc";
    char *y="defgh";
    print(x,y);
    int  a = -2;
    unsigned int b;
    b = (unsigned int)a;
    printf("%d",b);
    return 0;
}
#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d",&T);
	while(T--)
	{
	  int a,b;
	  scanf("%d%d",&a,&b);
	  int s=a+b;
	  int sum=0;
	  int digits;
	  int r;
	  while(s>0)
	  {
	      digits=s%10;
	      if(digits==0)
	      {
	          r=6;
	      }
	      if(digits==1)
	      {
	          r=2;
	      }
	      if(digits==2)
	      {
	         r=5;
	      }
	      if(digits==3)
	      {
	          r=5;
	      }
	      if(digits==4)
	      {
	          r=4;
	      }
	      if(digits==5)
	      {
	          r=5;
	      }
	      if(digits==6)
	      {
	          r=6;
	      }
	      if(digits==7)
	      {
	          r=3;
	      }
	      if(digits==8)
	      {
	          r=7;
	      }
	      if(digits==9)
	      {
	          r=6;
	      }
	      sum=sum+r;
	      digits=digits/10;
	      
	      
	  }
	  printf("%d\n",sum);
	}
	return 0;
}



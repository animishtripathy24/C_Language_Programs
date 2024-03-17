#include<stdio.h>
#include<math.h>

void main()
{
	int n,i,fact,sign,count;
	float x,sum;
	printf("enter the value of n\n");
	scanf("%d",&n);
	printf("enter the value of x in degree\n");
	scanf("%f",&x);
	x=(x*3.14)/180;
	sum=x;
	if(x==0)
	{
		count=0;
		goto last;
	}
	fact=1;
	sign=-1;
	count=1;
	for(i=3;i<=n;i+=2)
	{
		fact=fact*i*(i-1);
		if(sum>0.00001)
		{
			sum=sum+sign*pow(x,i)/fact;
		    count=count+1;
			sign=sign* -1;	
		} 
		
	}
	last:printf("sin(%f)=%f",x,sum);
	printf("\n\nnumber of terms used to obtain the answer is %d",count);
}

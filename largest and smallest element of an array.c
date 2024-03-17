#include <stdio.h>
main()
{ 
	int small,large,i,smallest_position,largest_position;
	int a[5];
	printf("enter the elements");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	large=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			smallest_position=i;
		}
		if(a[i]>large)
		{
			large=a[i];
			largest_position=i;
		}
	}
	printf("large element of the array is %d\n",large);
	printf("position of the largest element is %d\n",largest_position);
	printf("position of the smallest element is %d\n",smallest_position);
	printf("small element of the array is %d",small);
	
	
}

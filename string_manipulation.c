#include<stdio.h>
void main()
{
	char s[60];
	int vcount=0,scount=0,dcount=0,ccount=0,i;
	printf("enter the string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			vcount++;
		}
		else if(s[i]>=0&&s[i]<=9)
		{
			dcount++;
		}
		else if(s[i]==' ')
		{
			scount++;
		}
		else
		{
			ccount++;
		}
	
	}
	printf("the string is %s\n",s);
	printf("\nvowels= %d\n",vcount);
	printf("\nconsonants= %d\n",ccount);
	printf("\ndigits= %d\n",dcount);
	printf("\nspaces= %d\n",scount);
	//WORDS MUST BE EQUAL TO SPACE COUNT +1
	printf("\nwords= %d\n",scount+1);
}

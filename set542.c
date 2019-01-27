#include<stdio.h>
int main()
{
	char a[90],b[90];
	int n,i,c=0,co=0;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=0;b[i]!='\0';i++)
	{
		co++;
	}
	if(c>co)
	{
		printf("%s",a);
	}
	else if(c==co)
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
return 0;
}

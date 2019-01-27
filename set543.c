#include<stdio.h>
int main()
{
	char a[90];
	int n,i,c=0;
	gets(a);
	for(i=0;a[i]!=' ';i++)
	{
		c++;
	}
	for(i=c;a[i]!='\0';i++)
	{
			a[i]=a[i+1];
	}
	printf("%s",a);
return 0;
}

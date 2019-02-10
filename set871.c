#include <stdio.h>

int main(void) {
	char a[90];
	int s,i,c=0,co=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	s=c/2;
	for(i=0;i<s;i++)
	{
		if(a[i]==a[c-i-1])
		{
			co++;
		}
	}
	if(co==s)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

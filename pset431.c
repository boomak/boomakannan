#include <stdio.h>

int main(void) {
	char a[90];
	int s=0,s1=0,i,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=0;i<c;i++)
	{
		if(a[i]=='(')
		{
			s++;
		}
		if(a[i]==')')
		{
			s1++;
		}
	}
	if(s==s1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

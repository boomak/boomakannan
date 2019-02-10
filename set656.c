#include <stdio.h>

int main(void) {
	char a[90];
	int c=0,co=0,i,s=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		s++;
	}
	for(i=0;i<s;i++)
	{
		if(a[i]>=97&&a[i]<=122)
		{
			c++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			co++;
		}
	}
	if(c>=1&&co>=1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

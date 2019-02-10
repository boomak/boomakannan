#include <stdio.h>

int main(void) {
	char a[90];
	int i,c=0,co=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			c++;
		}
		else
		{
			co++;
		}
	}
	if(c>=1&&co==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

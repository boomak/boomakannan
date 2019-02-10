#include <stdio.h>

int main(void) {
	char a[90];
	int c=0,i,len=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
		if(a[i]=='0'||a[i]=='1')
		{
			c++;
		}
	}
	if(c==len)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}

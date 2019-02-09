#include <stdio.h>

int main(void) {
	char a[90];
	int c=0,i;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			c++;
		}
	}
	if(c>=1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

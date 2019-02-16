#include <stdio.h>

int main(void) {
	char a[90];
	int i,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=c;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}

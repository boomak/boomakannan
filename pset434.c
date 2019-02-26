#include <stdio.h>

int main(void) {
	char a[90];
	int i,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("%c",a[0]);
	for(i=3;i<=c;i+=3)
	{
		printf("%c",a[i]);
	}
	
	return 0;
}

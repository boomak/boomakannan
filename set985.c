#include <stdio.h>

int main(void) {
	char a[90];
	int i,c;
	gets(a);
	for(i=0;a[i]!='\0';i+=2)
	{
		printf("%c",a[i]);
	}
	printf(" ");
	for(i=1;a[i]!='\0';i+=2)
	{
		printf("%c",a[i]);
	}
	return 0;
}

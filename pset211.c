#include <stdio.h>

int main(void) {
	char a[90];
	gets(a);
	if(a[0]=='s')
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

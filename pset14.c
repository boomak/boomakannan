#include <stdio.h>

int main(void) {
	char a[90],temp;
	int i,s,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	a[c]='.';
	printf("%s",a);


	return 0;
}

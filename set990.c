#include <stdio.h>

int main(void) {
	char c[90];
    int i;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]>='0'&&c[i]<='9')
		{
			printf("%c",c[i]);
		}
	}
	return 0;
}

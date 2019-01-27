#include <stdio.h>

int main(void) {
	char a[90];
	int c,i,s=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='z'||a[i]==' ')
		{
			c=1;
		}
		else
		{
			s++;
		}
	}
	printf("%d",s);
	return 0;
}

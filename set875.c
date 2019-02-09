#include <stdio.h>

int main(void) {
	char a[90];
	int s,p,i,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	s=c/2;
	if(c%2==0)
	{
		p=s-1;
		a[s]='*';
		a[p]='*';
	}
	else
	{
		a[s]='*';
	}
	printf("%s",a);
	return 0;
}

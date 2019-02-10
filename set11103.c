#include <stdio.h>

int main(void)
{
	char a[90];
	int i,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	a[0]=a[0]-32;
	for(i=0;i<c;i++)
	{
		if(a[i]==' ')
		{
			a[i+1]=a[i+1]-32;
			i++;
		}
	}
	printf("%s",a);
	return 0;
}


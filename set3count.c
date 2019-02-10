#include <stdio.h>

int main(void) {
	char a[90];
	int i,c=0,co=0,coo=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			c++;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			co++;
		}
		else
		{
			coo++;
		}
	}
	if((c>=1&&co==0&&coo>=1)||(c>=1&&co==0&&coo==0))
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

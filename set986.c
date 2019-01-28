#include <stdio.h>

int main(void) {
	char a[90],temp;
	int i,j,s,c=0;
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		c=0;
		for(j=0;j<s;j++)
		{
		if(a[i]==a[i+1])
		{
			c=c+1;
		}
	    }
	}
	if(c>=1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	return 0;
}

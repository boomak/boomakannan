#include <stdio.h>

int main(void)
{
	char a[90],b[90];
	int i,j,c=0,co=0,s=0,s1=0;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		s++;
	}
	printf("%d ",s);
	for(j=0;b[j]!='\0';j++)
	{
		s1++;
	}
	printf("%d ",s1);
	if(s>s1||s==s1)
	{
		c=s;
	}
	else
	{
		c=s1;
	}
	printf("\n%d",c);
	for(i=0;i<c;i++)
	{
		if(a[i]!=b[i])
		{
			co++;
		}
	}
	printf("%d ",c);
	if(co>1)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	
	return 0;
}

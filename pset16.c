#include <stdio.h>
#include<string.h>

int main(void) {
	char a[90],b[90];
	int c[256],s,p,f=0,c1=0,co=0,i,j;
	scanf("%s",a);
	scanf("%s",b);
	memset(c,-1,256*sizeof(int));
	for(i=0;a[i]!='\0';i++)
	{
		c1++;
	}
	for(j=0;b[j]!='\0';j++)
	{
		co++;
	}
	if(c1!=co)
	{
		printf("no");
	}
	else
	{
		for(i=0;i<c1;i++)
		{
			s=a[i];
			p=b[i];
			if(c[s]==-1)
			{
				c[s]=p;
				f++;
				
			}
			else
			{
				if(c[s]==p)
				{
					f++;
				}
			}
		}
	}
	if(f==c1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}

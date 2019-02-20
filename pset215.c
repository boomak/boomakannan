#include <stdio.h>

int main(void) {
	char a[90],s;
	int i,c=0,j,co,max=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=0;i<c;i++)
	{
		co=0;
		for(j=i+1;j<c;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='\0';
				co++;
			}
		}
		if(co>max)
		{
			max=co;
			s=a[i];
		}
	}
	printf("%c",s);
	return 0;
}

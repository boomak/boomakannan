#include <stdio.h>

int main(void)
{
	char a[90];
	int c=0,i,j;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	a[0]=a[0]-32;
	for(i=1;i<c;i++)
	{
		if(a[i]==' ')
		{
			if(a[i+1]>='a'&&a[i+1]<='z')
			{
				a[i+1]=a[i+1]-32;
				i=i+2;
			}
		
		    else if(a[i+1]>='A'&&a[i+1]<='Z')
		    {
		      	i=i+2;
	     	}
	     	
		}
		else
		{
			if(a[i]>='A'&&a[i]<='Z')
			{
				a[i]=a[i]+32;
			}
		}
	}
	printf("%s",a);
	return 0;
}

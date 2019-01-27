#include <stdio.h>

int main(void) 
{
	int a,c,sum=0,i;
	int b[90];
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++)
	{
		sum=sum+b[i];
	}
	c=sum/a;
	printf("%d",c);
          
	return 0;
}


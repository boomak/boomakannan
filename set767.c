#include <stdio.h>

int main(void)
{
	int a=1,n,s,c=0,a1,p;
	scanf("%d",&n);
	p=n;
	while(n)
	{
		n=n/10;
		c++;
		a=a*10;
	}
	if(p>9)
	{
	a=a/10;
	a1=p/a;
	s=((a1+1)*10);
	}
	else
	{
		s=10;
	}
	
	printf("%d",s);
	

	return 0;
}


#include <stdio.h>

int main(void) {
	int n,a=1,c=0,s,p;
	scanf("%d",&n);
	p=n;
	while(n)
	{
		n=n/10;
		c++;
		a=a*10;
	}
	a=a/10;
	while(p)
	{
		s=p/a;
		printf("%d ",s);
		p=p%a;
		a=a/10;
	}
	return 0;
}

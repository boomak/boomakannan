#include <stdio.h>

int main(void) {
	int n,c=0,p,a=1,s;
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
		if(s%2!=0)
		{
			printf("%d ",s);
		}
		p=p%a;
		a=a/10;
	}
	
    
	return 0;
}

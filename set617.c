#include <stdio.h>

int main(void) {
	int n,p=0,s,p1,pow=1;
	scanf("%d",&n);
	p1=n;
	while(n)
	{
		s=n%10;
		p=s*pow+p;
		n=n/10;
		pow=pow*10;
	}
	printf("%d",p);
	if(p1==p)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

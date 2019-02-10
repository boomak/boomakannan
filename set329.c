#include <stdio.h>

int main(void) {
	int n,s,p;
	scanf("%d",&n);
	if(n<=60)
	{
		printf("0 ");
		printf("%d",n);
	}
	else
	{
	s=n%60;
	p=n/60;
	printf("%d %d",p,s);
	}
	return 0;
}

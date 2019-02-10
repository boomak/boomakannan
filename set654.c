#include <stdio.h>

int main(void) {
	int n,p;
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d",n);
	}
	else
	{
		p=n-1;
		printf("%d",p);
	}
	return 0;
}

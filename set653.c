#include <stdio.h>

int main(void) {
	int n,c=0,s;
	scanf("%d",&n);
	while(n)
	{
		s=n%10;
		c=c+s;
		n=n/10;
	}
	printf("%d",c);
	return 0;
}

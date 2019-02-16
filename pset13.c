#include <stdio.h>

int main(void) {
	int n,s;
	scanf("%d",&n);
	while(n)
	{
		s=n%10;
		printf("%d",s);
		n=n/10;
	}
	

	return 0;
}

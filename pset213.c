#include <stdio.h>

int main(void) {
	int n,s,i,g=0,rem;
	scanf("%d",&n);
	while(n)
	{
		s=1;
		rem=n%10;
		for(i=0;i<2;i++)
		{
			s=s*rem;
		}
		g=g+s;
		n=n/10;
	}
	printf("%d",g);
	return 0;
}

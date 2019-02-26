#include <stdio.h>

int main(void) {
	int n,i,s,c=0,k;
	scanf("%d%d",&n,&k);
	while(n)
	{
		s=n%10;
		if(s==k)
		{
			c++;
		}
		n=n/10;
	}
	printf("%d",c);
	
	
	return 0;
}


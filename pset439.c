#include <stdio.h>

int main(void) {
	int n,i,s=1,c=0;
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=s*2;
		if(n==s)
		{
			c=1;
		}
	}
	if(c==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
	int n,i,p,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		p=i*13;
		if(n==p)
		{
			c++;
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

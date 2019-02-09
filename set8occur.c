#include <stdio.h>

int main(void) {
	int n,l,r,c=0,i;
	scanf("%d%d%d",&n,&l,&r);
	for(i=l;i<r;i++)
	{
		if(n==i)
		{
			c++;
		}
	}
	if(c>=1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}

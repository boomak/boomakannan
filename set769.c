#include <stdio.h>

int main(void)
{
	int n,m,s;
	scanf("%d %d",&n,&m);
	if(n>m)
	{
		s=n-m;
	}
	else
	{
		s=m-n;
	}
	if(s%2==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}


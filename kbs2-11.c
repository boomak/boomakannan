#include <stdio.h>

int main()
{
	int a,b,i,s=1;
	scanf("%d%d",&a,&b);
	for(i=0;i<b;i++)
	{
		s=s*a;
	}
	printf("%d",s);
	return 0;
}

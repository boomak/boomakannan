#include <stdio.h>

int main(void) {
	int n,c=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(n%j==0)
			{
			c++;
			}
		}
	}
		if(c==0)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}
	return 0;
}

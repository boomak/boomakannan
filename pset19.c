#include <stdio.h>

int main(void) {
	int a,b,i,j,c,s=0,e=1;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		c=0;
		if(i==0||i==1)
		{
			c=1;
		}
		else
		{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		}
		if(c==0)
		{
			s=s+e;
		}
	}
	printf("%d",s);
	return 0;
}

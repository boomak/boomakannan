#include <stdio.h>

int main(void)
{ 
	int n,k,i,c=0,a[90];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			c++;
		}
	}
	if(c>=1)
	{
	printf("%d",c);
	}
	return 0;
}


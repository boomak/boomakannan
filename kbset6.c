#include <stdio.h>

int main(void) {
	int a[90],n,i,c=0,k;
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
		printf("%d",c);
	else
	{
		printf("no");
	}
	
	return 0;
}

#include <stdio.h>

int main(void) {
	int a[90],n,i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=0;
	for(i=0;i<n;i++)
	{
	if(max<a[i])
	{
		max=a[i];
	}
	}
	printf("%d",max);
	return 0;
}

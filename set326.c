#include <stdio.h>

int main(void) {
	int n,a[90],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]==a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}

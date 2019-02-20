#include <stdio.h>

int main(void) {
	int n,a[90],c,j,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				c++;
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
			}
		}
		if(c==0)
		{
			printf("%d",a[i]);
			break;
		}
	}
	
	return 0;
}

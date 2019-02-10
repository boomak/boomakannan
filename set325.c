#include <stdio.h>

int main(void) {
	int n,a[90],i,temp,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	if(n%2==0)
	{
		s=(n/2)+1;
		printf("%d",a[s]);
	}
	else
	s=n/2;
	printf("%d",a[s]);
	return 0;
}

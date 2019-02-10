#include <stdio.h>

int main(void) {
	int a,d,n,i,s,k=0,b[90];
	scanf("%d%d%d",&a,&d,&n);
	for(i=a;i<=n;i+=d)
	{
		b[k]=i;
		k++;
	}
	for(i=0;i<k;i++)
	{
		s=s+b[i];
	}
	printf("%d",s);
	
	
	return 0;
}

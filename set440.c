#include <stdio.h>

int main(void) {
	int f1=0,f2=1,f3,n,i;
	scanf("%d",&n);
	printf("%d ",f2);
	for(i=1;i<n;i++)
	{
		f3=f1+f2;
		f1=f2;f2=f3;
		printf("%d ",f3);
	}
	
	return 0;
}

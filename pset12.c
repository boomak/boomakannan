#include <stdio.h>

int main(void) {
	int n,i,s=1;
	scanf("%d",&n);
	if(n==0||n==1)
	{
		printf("1");
	}
	else
	{
		for(i=n;i>=1;i--)
		{
			s=s*i;
		}
	
	printf("%d",s);
	}
	

	return 0;
}

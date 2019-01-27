#include <stdio.h>

int main(void) {
	int n,i,s=1,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=s*2;
		if(s==n)
		{
			printf("yes");
			c=1;
			break;
		}
	}
		if(c==0)
		{
			printf("no");
		}
		
	
	
	return 0;
}

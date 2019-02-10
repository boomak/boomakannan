#include <stdio.h>

int main(void)
{ 
	int n,i,c=0;
	scanf("%d",&n);
	while(n)
	{
		n=n/10;
		c++;
		
	}
	printf("%d",c);
	return 0;
}


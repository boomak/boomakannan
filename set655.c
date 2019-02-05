#include <stdio.h>

int main(void) {
	int n,n1,c;
	scanf("%d",&n);
	scanf("%d",&n1);
	c=n*n1;
	if(c%2==0)
	{
		printf("even");
	}
	else
	{
		printf("odd");
	}
	return 0;
}

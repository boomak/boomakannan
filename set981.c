#include <stdio.h>

int main(void) {
	int n1,n2,s;
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		s=n1-n2;
		printf("%d",s);
	}
	else
	{
		s=n2-n1;
		printf("%d",s);
	}
	
	return 0;
}

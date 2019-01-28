#include <stdio.h>

int main(void) {
	int n1,n2,gcd,t;
	scanf("%d%d",&n1,&n2);
	while(n2)
	{
		t=n2;
		n2=n1%n2;
		n1=t;
		
	}
	gcd=n1;
	printf("%d",gcd);
	return 0;
}

#include <stdio.h>

int main(void) {
	int n1,n2,gcd,t,g,lcm;
	scanf("%d%d",&n1,&n2);
	g=n1*n2;
	while(n2)
	{
		t=n2;
		n2=n1%n2;
		n1=t;
		
	}
	gcd=n1;
	lcm=g/gcd;
	printf("%d",lcm);
	return 0;
}

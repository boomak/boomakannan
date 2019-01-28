#include <stdio.h>

int main(void) {
	long int n1,n2,s;
	char sym;
	scanf("%ld %c %ld",&n1,&sym,&n2);
	if(sym=='/')
	{
		s=n1/n2;
		printf("%ld",s);
	}
	else if(sym=='%')
	{
		s=n1%n2;
		printf("%ld",s);
	}
	
	return 0;
}

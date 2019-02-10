#include <stdio.h>

int main(void) {
	char a[90];
	int n,i;
	scanf("%[^\n]",a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("%c",a[i]);
	}

	return 0;
}

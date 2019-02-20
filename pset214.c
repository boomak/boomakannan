#include <stdio.h>

int main(void) {
	char a[90];
	int i,n;
	scanf("%d\n",&n);
	scanf("%s",&a);
	for(i=n-1;i>=0;i--)
	{
		if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}

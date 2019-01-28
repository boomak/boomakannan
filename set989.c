#include <stdio.h>

int main(void) {
	char a[90],temp;
	int i,j,s;
	gets(a);
	s=strlen(a);
	for(i=0;i<s;i++)
	{
		for(j=0;j<s-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("%s",a);
	return 0;
}

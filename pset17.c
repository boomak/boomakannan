#include <stdio.h>

int main(void) {
	char a[90],temp;
	int i,s,c=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	if(c%2==0)
	{
	for(i=0;a[i]!='\0';i+=2)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
	else
	{
		for(i=0;i<c-1;i+=2)
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("%s",a);


	return 0;
}

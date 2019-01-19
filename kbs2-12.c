#include <stdio.h>

int main()
{
	int a,i,s=1,rem,sum=0,b;
	scanf("%d",&a);
	b=a;
	while(a)
	{
		rem=a%10;
		sum=sum*10+rem;
		a=a/10;
		
	}
	if(sum==b)
	{
		printf("yes");
	}
	else
	{
	printf("no");
	}
	return 0;
}

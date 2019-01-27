#include <stdio.h>

int main(void) 
{
	int a,c,sum=0,i;
	int b[90],min,max;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	max=0;
	for(i=0;i<a;i++)
	{
		if(max<b[i])
		{
			max=b[i];
		}
	}
	min=b[0];
    for(i=0;i<a;i++)
    {
    	if(min>b[i+1])
    	{
    		min=b[i+1];
    	}
    }
    printf("%d %d",min,max);
	return 0;
}


#include <stdio.h>

int main()
{
	int a,i,j,count=0,b;
	scanf("%d%d",&a,&b);
	
    for(i=a+1;i<b;i++)
    {
    	count=0;
    	for(j=2;j<=i/2;j++)
    	{
    	if(i%j==0)
    	{
    		count=1;
    	}
    	}
    	 if(count==0)
    	{
    		printf("%d",i);
    	}
    }
	return 0;
}

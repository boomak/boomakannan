#include <stdio.h>

int main(void) {
	int n,m,s,c=0,p,i;
	scanf("%d%d",&n,&m);
	s=n*m;
    for(i=1;i<s;i++)
    {
    	p=i*i;
    	if(p==s)
    	{
    		c++;
    		if(c==1)
    		{
    			break;
    		}
    	}
    }
    if(c>=1)
    {
    	printf("yes");
    }
    else
    {
    	printf("no");
    }
    
	return 0;
}

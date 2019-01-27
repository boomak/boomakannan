#include <stdio.h>

int main(void) {
    int n,a,d,s=0,p,i,k=0;
    scanf("%d%d%d",&n,&a,&d);
    p=d;
    d=0;
    for(i=0;i<n;i++)
    {
    	s=s+d+a;
    	d=p;
    	a=0;
    	k=k+s;
    }
   
    
    	printf("%d ",k);
    
 
    
	return 0;
}

#include <stdio.h>

int main(void) {
    int h1,h2,min1,min2,d,f;
    scanf("%d%d",&h1,&min1);
    scanf("%d%d",&h2,&min2);
    if(h1>h2)
    {
    d=h1-h2;	
    }
    else
    {
    	d=h2-h1;
    }
    if(min1>min2)
    {
    	f=min1-min2;
    }
    else
    {
    	f=min2-min1;
    }
    
    printf("%d %d ",d,f);
    
 
    
	return 0;
}

#include <stdio.h>

int main(void) {
    int n,i,a[90];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    	printf("%d %d",a[i],i);
    	printf("\n");
    }
    
    
 
    
	return 0;
}

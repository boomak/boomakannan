#include <stdio.h>

int main(void) {
int n,k,d=0,a[100],i;
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<k;i++)
{
d=d+a[i];	
}
printf("%d",d);

return 0;
}

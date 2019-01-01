#include <stdio.h>

int main(void) {
int a,d=0;
scanf("%d",&a);
while(a)
{
	a=a/10;
	d++;
}
printf("%d",d);
return 0;
}

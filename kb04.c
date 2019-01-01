#include <stdio.h>

int main(void) {
char n;
scanf("%c",&n);
if(n>='a'&&n<='z'||n>='A'&&n<='Z')
{
	printf("Alphabet");
}
else 
{
	printf("No");
}
return 0;
}

#include<stdio.h>
#include<conio.h>
int main()
{
int n;
scanf("%d",&n);
if(n%2==0)
{
printf("Even");
}
else if(n%2!=0)
{
printf("Odd");
}
else if(n<=0)
{
printf("Invalid");
}
return 0;
}

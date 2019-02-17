#include <stdio.h>
#include<string.h>

int main(void) {
	char a[90];
	int b[90],i,j,k,c=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	for(i=0;i<c;i++)
	{
		switch(a[i])
		{
			case 'I':b[i]=1;
			break;
			case 'V':b[i]=5;
			break;
			case 'X':b[i]=10;
			break;
			default:break;
			
		}
	}
		k=b[0];
		for(j=c-1;j>0;j--)
		{
			if(b[j]>=k)
			{
				k=b[j]-k;
				break;
			}
			else
			{
				k=k+b[j];
				break;
			}
		}

printf("%d",k);	
	return 0;
}

#include <stdio.h>

int main(void) {
	int i,n,m,p,q,c,j,s,rem,tot;
	scanf("%d%d",&n,&m);
	for(i=n;i<m;i++)
	{
		p=i;
		q=i;
		c=0;
		tot=0;
		while(q)
		{
			q=q/10;
			c++;
		}
		while(p)
		{
			s=1;
			rem=p%10;
			for(j=0;j<c;j++)
			{
				s=s*rem;
			}
			tot=tot+s;
			p=p/10;
		}
		if(tot==i)
		{
			printf("%d",i);
		}
	}
	return 0;
}

#include<stdio.h>
int main(void)
{
	int m,n;
	int a,b;
	scanf("%d",&n);
	scanf("%d",&m);
	if(m<=n)
	{
		m = b;
		n = a;
	}
	else
	{
		m = a;
		n = b;
	}
	
	while(a%b!=0)
	{
		int c=a%b;
		a=b;
		b=c;
		c=a%b;
	}
	printf("%d",b);
 } 

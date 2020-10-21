#include<stdio.h>
int main(void)
{
	int i,j,n,m,k;
	printf(" ‰»ÎπÊ∏Ò£∫");
	scanf("%d",&i);
	for(j=1;j<=i;j++)
	{
		for(m=1;m<=i;m++)
		{
			if(j<=i/2)
			{
				if(m>=j&&m<=i-j+1)
				n = 1;
				else
				n = 2;
			}
			else
			{
				if(m>=i-j+1&&m<=j)
				n = 1;
				else
				n = 2;
			}
			switch(n)
			{
				case 1:printf("*");
				break;
				case 2:printf(" ");
				break;
			}
			if(m==i)
			printf("\n");
		}
	}
}

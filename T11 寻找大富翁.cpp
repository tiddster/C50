#include <stdio.h>

int main(void)
{
	int i,j,t,a[100],l,m; 
	printf("输入人数和寻找人数：");
	scanf("%d %d",&l,&m);                  
	printf("输入所有人收入：");
	for(i=1;i<=l;i++)
	{
		scanf("%d",&a[i]);            
	}	
	for(i=1;i<=l;i++)
	{
		for(j=i;j<=l-1;j++)
		{
			if(a[i]<a[j])
		    {
		    	t=a[i];
				a[i]=a[j];
				a[j]=t;
		    }
		}
	}
	printf("富翁是：");
	for(i=1;i<=m;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

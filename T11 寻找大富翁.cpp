#include <stdio.h>

int main(void)
{
	int i,j,t,a[100],l,m; 
	printf("����������Ѱ��������");
	scanf("%d %d",&l,&m);                  
	printf("�������������룺");
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
	printf("�����ǣ�");
	for(i=1;i<=m;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

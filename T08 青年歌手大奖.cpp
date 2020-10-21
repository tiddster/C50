#include <stdio.h>

int main(void)
{
	int i,j,a[100],l,t;
	float sum;
	sum=0;
	printf("Please enter length:");
	scanf("%d",&l);                  
	printf("Please input numbers:");
	for(i=1;i<=l;i++)
	{
		scanf("%d",&a[i]);            
	}	
	for(i=1;i<=l;i++)
	{
		for(j=i;j<=l;j++)
		{
			if(a[i]>a[j])
		    {
		    	t=a[i];
				a[i]=a[j];
				a[j]=t;
		    }
		}
	}
	printf("Please output numbers: ");
	for(i=2;i<=l-1;i++)
	{
		printf("%d ",a[i]);
		sum+=a[i];
	}
	printf("%.2f",sum/(l-2));
}

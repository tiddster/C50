#include<stdio.h>
int main()
{
	int n,m,i,j,score[100],tof[100],ans[100][100],sum[100];
	for(i=0;i<100;i++)
	sum[i]=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
	scanf("%d",&score[i]);
	for(i=0;i<m;i++)
	scanf("%d",&tof[i]);
	for(j=0;j<n;j++)
	for(i=0;i<m;i++){
		scanf("%d",&ans[j][i]);
		if(ans[j][i]==tof[i])
		sum[j]=sum[j]+score[i];
	}
	for(j=0;j<n;j++)
	printf("%d ",sum[j]); 
 }

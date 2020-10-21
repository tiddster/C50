#include<stdio.h>
int main()
{
	int n,a[10],i,sum[362880],max,k,j,total;
	scanf("%d",&n);
	k=n,max=1,total=0;
	while(n!=0){
		max=n*max;
		n--;
	}
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	for(n=0,i=0;n<max;i++){
		for(j=0;j<k;j++){
			if(j!=i){
				sum[n]=a[i]*10+a[j];
				n++;
			}
		}
	}
	for(n=0;n<max;n++)
	total+=sum[n];
	printf("%d",total);
 } 

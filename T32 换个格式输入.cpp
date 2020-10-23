#include<stdio.h>
int main()
{
	int a[3],i,b,s,n;
	int k;
	for(i=0;i<3;i++)
	a[i]=0;
	scanf("%d",&k);
	i=0;
	while(k!=0){
		a[i]=k%10;
		k=(k-a[i])/10;
		i++;
	}
	b=a[2];s=a[1];n=a[0];
    while(b--){
    	printf("B");
	}	
	while(s--){
		printf("S");
	}
	for(i=1;i<=n;i++)
	printf("%d",i);
 } 

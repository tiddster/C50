#include<stdio.h>
#include<math.h>
int main()
{
	int a[10],b[10];
	int g,i;
	scanf("%d",&g);
	for(i=0;i<g;i++){
	    scanf("%d%d",&a[i],&b[i]);
	    while(a[i]>pow(10,9)||b[i]>pow(10,9)){
	    	printf("Change another one\n");
	    	scanf("%d%d",&a[i],&b[i]);
		}
    }
	for(i=0;i<g;i++){
		if(a[i]%b[i]==0)
		printf("YES\n");
		else
		printf("NO\n");
	}
} 

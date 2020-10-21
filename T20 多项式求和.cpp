#include<stdio.h>
int main()
{
	int group,g[1000],k,term,t;
	float result[1000],n;
	scanf("%d",&group);
	for(k=1;k<=group;k++)
	scanf("%d",&g[k]);
	for(k=1;k<=group;k++){
		term=1;
		t=1;
		for(;term<g[k];){
			term++;
			t=t*term;
			printf("%d\n",t);
    	}
    	term=1;
    	n=t;
		for(;term<g[k];){
			term++;
			if(term%2==0){
				n=n-t/term;
			}else if(term%2==1){
				n=n+t/term;
			}
		}
		result[k]=n/t;
	    }
	for(k=1;k<=group;k++){
		printf("%.2f  ",result[k]);
	}
 } 

#include <stdio.h>
int main(){
    int num=2;
    int k,n[10000],m,j;
    k=2;
    n[1]=2;
	for(;num<=10000;num++){
	for(int i=2;i<num;i++){
        if(num%i==0){  
			break;
        }
        if(i==num-1){
        	n[k++]=num;
		}
    }
    }
    j=k;
    int pn,pm,count;
    count=1;
    scanf("%d %d",&pn,&pm);
    for(k=pn;k<=pm-1;k++){
    printf("%d ",n[k]);	
    count++;
    if(count==10){
    	printf("\n");
    	count=1;
	}
	}
}

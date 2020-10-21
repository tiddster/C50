#include<stdio.h>
int main(){
	int p,l[100],a[100][100],judge_num,i,j,t,max,k;
	judge_num = 1;
	for(p=1;;p++){
		scanf("%d",&l[p]);
		if(l[p]==0)
		break;
		for(i=1;i<=l[p];i++)
		scanf("%d",&a[p][i]);
		if(a[p][1]<a[p][2]){
			j=1;
		}else{
			j=2;
		}
		for(i=3;i<=l[p];i++){
			if(a[p][j]<a[p][i]){
				j=j;
			}else{
				j=i;
			}
		}
		t=a[p][1];
		a[p][1]=a[p][j];
		a[p][j]=t;
	}
	max=p;
	for(p=1;p<=max;p++){
	for(i=1;i<=l[p];i++){
		printf("%d ",a[p][i]);
	}
	printf("\n");
}
} 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int m,k,bs,cm,sum;  //mǮ����k�ִΣ�bs��С��cm���룬sum����
	int n1[10],n2[10];
	srand((unsigned int)time(NULL));
	scanf("%d %d",&m,&k);
	while(k--){
		printf("ʣ��%d��\n",k+1);
		n1[k]=rand()%10+1;
		n2[k]=rand()%10+1;
		while(n1[k]==n2[k])
		    n2[k]=rand()%10+1;
		    
		printf("��һ�������ǣ�%d \n",n1[k]);
		scanf("%d %d",&bs,&cm);
		printf("�ڶ��������ǣ�%d \n",n2[k]);
		
		if(cm>m)
		    printf("Not enough %d\n",m);
		else{
			if((n1[k]/n2[k])!=bs){
				m=m+cm;
				printf("WIN total:%d\n",m);
			}else{
				m=m-cm;
				printf("LOSE total:%d\n",m);
			}
		}
		if(m==0){
			printf("Game over total:%d\n",m);
			break;
		}
		printf("\n");
	}
	
	printf("total:%d",m);	
} 

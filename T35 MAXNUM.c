#include<stdio.h>

int main()
{
    int n,k[100],i,m;
    float h[100][100],t[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&k[i]);
        for(m=0;m<k[i];m++){
            scanf("%f",&h[i][m]);
        }
    }
    for(i=0;i<n;i++){
        t[i]=0;
        for(m=0;m<k[i];m++){
            if(h[i][m]>t[i])
            t[i]=h[i][m];
        }
    }
    for(i=0;i<n;i++)
    printf("%.2f\n",t[i]);
}
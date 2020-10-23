#include<stdio.h>

int main()
{
    int n,m,js[100],ks[100],zkzh[100],i,k[100],j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d",&zkzh[i],&js[i],&ks[i]);
    }
    scanf("%d",&j);
    for(i=0;i<j;i++)
    scanf("%d",&k[i]);
    for(i=0;i<j;i++)
    for(m=0;m<n;m++)
    if(k[i]==js[m])
    printf("%d %d\n",zkzh[m],ks[m]);
}

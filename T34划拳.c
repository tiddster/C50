#include<stdio.h>

int main()
{
    int i,n,jhua[100],jhan[100],yhua[100],yhan[100];
    int js,ys;
    ys=js=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d %d %d",&jhan[i],&jhua[i],&yhan[i],&yhua[i]);
        if(jhua[i]==jhan[i]+yhan[i]&&yhua[i]!=jhan[i]+yhan[i])
        ys++;
        else if(yhua[i]==jhan[i]+yhan[i]&&jhua[i]!=jhan[i]+yhan[i])
        js++;
    }
    printf("%d\n",js);
    printf("%d\n",ys);
}
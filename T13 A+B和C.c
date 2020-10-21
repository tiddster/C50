#include<stdio.h>

int main()
{
    int k,j,i;
    int a[k],b[k],c[k];
    printf("输入组数：");
    scanf("%d",&k);
    while(k>10)
    {
        printf("重新输入：");
        scanf("%d",&k);
    }
    j=k;
    for(k=1;k<=j;k++)
    {
        scanf("%d %d %d",&a[k],&b[k],&c[k]);
    }
    for(k=1;k<=j;k++)
    {
        if(a[k]+b[k]>c[k])
        i=1;
        else
        i=2;
        switch(i)
        {
            case 1: printf("Case#%d:true\n",k);
            break;
            case 2: printf("Case#%d:false\n",k);
            break;
         }
    }
}
#include<stdio.h>
int main(void)
{
    int y[100],m[100],d[100],l,n[100],k,p;
    int j=1;
    k=1;
    while(j==1)
    {
    printf("输入年月日"); 
    scanf("%d",&y[k]);
    scanf("%d",&m[k]);
    scanf("%d",&d[k]);
    p=k;
    for(k=1;k<=p;k++) 
    printf("%d/%d/%d\n",y[k],m[k],d[k]);
    k=p;
    k++;
    printf("输入1继续运行，其他结束运行\n"); 
    scanf("%d",&j);
    }                             //输入并打印日期 
    printf("正在计算日期\n");  
    p=k;
    for(k=1;k<=p;k++)
    {
    n[k]=0;
    for(l=1;l<m[k];l++)
    {
      if(l==1||l==3||l==5||l==7||l==8||l==10||l==12)
      n[k]=n[k]+31;
      else if(l==4||l==6||l==9||l==11)
      n[k]=n[k]+30;
      else if(l==2)
      {
         if(y[k]%4==0)
         n[k]=n[k]+29;
         else
         n[k]=n[k]+28;
      }
    }
    n[k]=n[k]+d[k];
    }
    for(k=1;k<p;k++)
    printf("%d\n",n[k]);
    return 0;
}

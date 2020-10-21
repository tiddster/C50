#include<stdio.h>
int main(void)
{
    int a,b,c,k;
    scanf("%d %d",&a,&b);
    if(a<b) 
    {
        c=b;
        b=a;
        a=c;
    }
    while(a%b!=0)
    {
        k=a%b;
        a=b;
        b=k;
        k=a%b;
    }
    printf("%d",b);
 }

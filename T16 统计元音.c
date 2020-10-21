#include<stdio.h>

int main()
{
    int k,i[5],n;
    char ch[100];
    for(k=1;k<=5;k++)
    i[k]=0;
    for(n=1;ch[n]=='\n'||n<=10;n++)
    {
        scanf("%c",&ch[n]);
        if(ch[n]=='a')
        i[1]++;
        else if(ch[n]=='e')
        i[2]++;
        else if(ch[n]=='i')
        i[3]++;
        else if(ch[n]=='o')
        i[4]++;
        else if(ch[n]=='u')
        i[5]++;
    }
    printf("a:%d\n",i[1]);
    printf("e:%d\n",i[2]);
    printf("i:%d\n",i[3]);
    printf("o:%d\n",i[4]);
    printf("u:%d\n",i[5]);
}

#include<stdio.h>

int main()
{
    int i,k;
    k=0;
    scanf("%d",&i);
    while(i>1000)
    {
        printf("Ì«´óÁË\n");
        scanf("%d",&i);
    }
    while(i!=1)
    {
        if(i%2==1) 
        i=(i*3+1) /2;
        else if(i%2==0)
        i=i/2;
        k++;
    }
    printf("%d",k);
}

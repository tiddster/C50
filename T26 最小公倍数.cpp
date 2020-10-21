#include<stdio.h>
int main()
{
    int m,n,j,i;
    scanf("%d %d", &m, &n);
    if(m<n){
        j = m;
        m = n;
        n = j;
    }
    for(i=m; i>0; i++)
        if(i%m==0 && i%n==0){
            printf("%d\n",i);
            break;
        }
    return 0;
}

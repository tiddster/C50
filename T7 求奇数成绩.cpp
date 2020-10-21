#include<stdio.h>
int main()
{
    int i,n,m,k;
    while(1)
    {   
        scanf("%d",&n); 
	    m=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",k);
            if(k%2==1)
            m*=k;
        }
        printf("%d\n",m);
    }
    return 0;
}

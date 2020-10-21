#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,max;
	a=2;
	n=2;
	scanf("%d",&max);
	printf("%d %d\n",n,a);
    while(n<max){
		n++;
		a=pow(2,(n-1))-a;
		printf("%d %d\n",n,a);
	}
}

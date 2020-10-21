#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,max1,num[10000],sum,j,b[10000];
    char text[10000];
    sum=0;
    scanf("%s",text);
    max1=strlen(text);
    for(i=0;i<max1;i++)
        num[i]=text[i]-48;
    for(i=0;i<max1;i++)
        sum+=num[i];
    while(sum!=0){
    	b[j]=sum%10;
    	sum=sum/10;
    	j++;
	}
	for(i=j-1;i>=0;i--){
        switch(b[i]){
            case 0: printf("ling ");
            break;
            case 1: printf("yi ");
            break;
            case 2: printf("er ");
            break;
            case 3: printf("san ");
            break;
            case 4: printf("si ");
            break;
            case 5: printf("wu ");
            break;
            case 6: printf("liu ");
            break;
            case 7: printf("qi ");
            break;
            case 8: printf("ba ");
            break;
            case 9: printf("jiu");
        }
    }
}

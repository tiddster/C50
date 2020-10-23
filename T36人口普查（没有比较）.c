#include<stdio.h>

int main()
{
    int y[100],m[100],d[100],n,i,p,k;
    int y2[100],m2[100],d2[100];
    char name[100][100];
    p=k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&name[i]);
        scanf("%d/%d/%d",&y[i],&m[i],&d[i]);
    }
    for(i=0,k=0;i<n;i++){
        if(y[i]>1814&&y[i]<2014){
            p++;
            y2[k]=y[i];m2[k]=m[i];d2[k]=m[i];
            k++;
        }
        else if(y[i]<1814||y[i]>2014)
        break;
        else if(y[i]==1814){
            if(m[i]<9)
            break;
            else if(m[i]>9){
            p++;
            y2[k]=y[i];m2[k]=m[i];d2[k]=m[i];
            k++;
        }
            else if(m[i]==9){
                if(d[i]>=6){
                    p++;
                    y2[k]=y[i];m2[k]=m[i];d2[k]=m[i];
                    k++;
                 }
                else
                break;
            }
        }else if(y[i]==2014){
            if(m[i]>9)
            break;
            else if(m[i]<9){
            p++;
            y2[k]=y[i];m2[k]=m[i];d2[k]=m[i];
            k++;
        }else if(m[i]==9){
                if(d[i]<=6){
                    p++;
                    y2[k]=y[i];m2[k]=m[i];d2[k]=m[i];
                    k++;
                 }
                else
                break;
            }
        }
    }
    printf("%d",p);
} 
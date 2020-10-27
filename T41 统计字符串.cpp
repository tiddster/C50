#include<stdio.h>
#include<string.h>
int main()
{
	int m[51],max,i,j,total[25],the_most;
	char a[1000],n[51];
	for(i=0;i<52;i++)
	    m[i]=0;
	for(i=0;i<26;i++)
	    n[i]='A'+i;
	for(i=26;i<52;i++)
	    n[i]='a'+i-26;          //将A到z储存在字符串组n[i]中
	    
	gets(a);
	max=strlen(a);
	printf("%d  ",max);
	for(i=0;i<max;i++){
        for(j=0;j<52;j++){
        	if(a[i]==n[j]){
        		m[j]++;
        		break;
			}
		}	
	}                           //比较每一位字母，并计数，此时大小写字母被分开计算 
	for(j=0;j<52;j++)
	    printf("%c:%d  ",n[j],m[j]);
	for(i=0;i<26;i++)
        total[i]=m[i]+m[i+26];  //将大小写字母数加起来
		
	the_most=0;
	for(i=0;i<26;i++){
		if(the_most<total[i]){
		    the_most=total[i];
		    j=i;
		}
	}
	printf("%c %d",n[j+26],the_most);      // 比较每个字母谁最多  
 } 

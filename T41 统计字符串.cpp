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
	    n[i]='a'+i-26;          //��A��z�������ַ�����n[i]��
	    
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
	}                           //�Ƚ�ÿһλ��ĸ������������ʱ��Сд��ĸ���ֿ����� 
	for(j=0;j<52;j++)
	    printf("%c:%d  ",n[j],m[j]);
	for(i=0;i<26;i++)
        total[i]=m[i]+m[i+26];  //����Сд��ĸ��������
		
	the_most=0;
	for(i=0;i<26;i++){
		if(the_most<total[i]){
		    the_most=total[i];
		    j=i;
		}
	}
	printf("%c %d",n[j+26],the_most);      // �Ƚ�ÿ����ĸ˭���  
 } 

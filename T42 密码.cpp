#include<stdio.h>
#include<string.h>
int main()
{
	int e[100],b[100],c[100],d[100],m,i,j,max[100],n1[100],n2[100],end[100],k,l,p1,p2,p3;
	char a[100][16];
	for(i=0;i<100;i++)
	    e[i]=b[i]=c[i]=d[i]=0;
	scanf("%d",&m);
	
	for(i=0;i<m;i++){
		scanf("%s",&a[i]);                    // ��ȡ���� 
		max[i]=strlen(a[i]);           // ��������λ��������һ���ж�
		
		for(j=0;j<max[i];j++){
			if(a[i][j]<=90&&a[i][j]>=65){
				b[i]=1;                      
			}                                   //��ȡÿλ���룬���д�д��ĸ����b[i]Ϊ1 
			if(a[i][j]<=122&&a[i][j]>=97){
				c[i]=1;
			}                                   //��ȡÿλ���룬����Сд��ĸ����c[i]Ϊ1
	        if(a[i][j]<=57&&a[i][j]>=48){
	        	d[i]=1;
			}	                                //��ȡÿλ���룬�������֣���d[i]Ϊ1
		    if(a[i][j]==33||a[i][j]==35||a[i][j]==36||a[i][j]==37||a[i][j]==94||a[i][j]==126){
		    	e[i]=1;
			}                                   //��ȡÿλ���룬���������ַ�����e[i]Ϊ1
		}
		
		k=b[i]|c[i];
		l=d[i]|e[i];
		p1=k&l;	
		k=b[i]|d[i];
		l=c[i]|e[i];
		p2=k&l; 
		k=b[i]|e[i];
		l=c[i]|d[i];
		p3=k&l;
		p1=p1&p2;
		n2[i]=p1&p3;                             //�����ȽϺ����ȷ�������������������͵�����ʱn2Ϊ1 
	}
	
	for(i=0;i<m;i++){
		if(max[i]>=8&&max[i]<=16)
		    n1[i]=1;                             //����Ϊ������8λn1Ϊ1 
		end[i]=n1[i]&n2[i];
		if(end[i]==1)                            //�Ƚ�n1��n2�ж������Ƿ�ȫ 
		    printf("YES\n");
		else
		    printf("NO\n");
	}
 } 

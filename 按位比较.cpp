#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sta=1;
	int n1,n2,n3,m;
	char b[32];
	unsigned i; 
	
	n1=sta<<5;
	i=sta|n1;       //ʹ��1,6λ��Ϊ1 
    
	
    for(m=9;m<15;m++){
    	n2=sta<<m;
    	i=i|n2;
	}               //ʹ��10~15λ��Ϊ1

	for(m=25;m<32;m++){
		n3=sta<<m;
		i=i|n3;
	}               //ʹ��26~32λ��Ϊ1 
    itoa(i,b,2);
    printf("%u\n",i);
    printf("%s",b);
 } 

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int sta=1;
	int n1,n2,n3,m;
	char b[32];
	unsigned i; 
	
	n1=sta<<5;
	i=sta|n1;       //使第1,6位变为1 
    
	
    for(m=9;m<15;m++){
    	n2=sta<<m;
    	i=i|n2;
	}               //使第10~15位变为1

	for(m=25;m<32;m++){
		n3=sta<<m;
		i=i|n3;
	}               //使第26~32位变为1 
    itoa(i,b,2);
    printf("%u\n",i);
    printf("%s",b);
 } 

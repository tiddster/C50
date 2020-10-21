#include<stdio.h>
#include<string.h> 
#include<math.h>
int main()
{
	int Da,Db,Pa,Pb,count,k,i,sum;
	char a[100],b[100];
    count=0,Pa=Pb=0;
	scanf("%s",&a);
	scanf("%d",&Da);
	k=strlen(a);
	for(i=0;i<k;i++){
		if(a[i]==Da+'0'){
			count++;
		}
	}
	while(count--){
		Pa=Pa+Da*pow(10,count);
	}
	count=0;
	scanf("%s",&b);
	scanf("%d",&Db);
	k=strlen(b);
	for(i=0;i<k;i++){
		if(b[i]==Db+'0'){
			count++;
		}
	}
	while(count--){
		Pb=Pb+Db*pow(10,count);
	}
	sum=Pa+Pb;
	printf("%d",sum);
 } 

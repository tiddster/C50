#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char text[50];
    int plies,i,number[10];
    for(i=0;i<=9;i++)
    number[i]=0;
    scanf("%s",&text);
    plies = strlen(text);
    for(i=0;i<plies;i++){
    	switch(text[i]){
    		case 49:number[1]++;
    		break;
    		case 50:number[2]++;
    		break;
    		case 51:number[3]++;
    		break;
    		case 52:number[4]++;
    		break;
    		case 53:number[5]++;
    		break;
    		case 54:number[6]++;
    		break;
    		case 55:number[7]++;
    		break;
    		case 56:number[8]++;
    		break;
    		case 57:number[9]++;
    		break;
    		case 48:number[0]++;
    		break;
		}
	}
	for(i=0;i<9;i++){
		if(number[i]>0){
			printf("%d:%d\n",i,number[i]);
		}
	}
 } 

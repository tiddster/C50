#include<stdio.h>
int main(void)
{
	int m,n,i;
	printf("第一门课的成绩：");
	scanf("%d",&m);
	printf("第二门课的成绩：");
	scanf("%d",&n);
	if(m<0||m>100||n<0||n>100)
	{
		i = 1;
	}
	else if(m>=0&&m<=100&&n>=0&&n<=100)
	{
		if(m<=60||n<=60)
		{
			i = 2;
		}
		else 
		i = 3;
	}
	switch(i)
	{
		case 1||2:printf("it is error");
		break;
		case 4:printf("it is not pass");
		break;
		case 3:printf("it is pass");
	}
 } 

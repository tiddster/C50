# include<stdio.h>
int main(void)
{
	int a,b,c;
	printf("输入第一条边长：");
	scanf("%d",&a);
	printf("输入第二条边长：");
	scanf("%d",&b);
	printf("输入第三条边长：");
	scanf("%d",&c);
	
	if(a+b>c&&a+c>b&&b+c>a)
	{
		if(a==c&&a==b&&b==c)
		{
			printf("1");
		}
		else if((a==b&&a!=c)||(a==c&&c!=b)||(b==c&&c!=a))
		{
			printf("2");
		}
		else if(a!=b!=c)
		{
			printf("3");
		}
	 }	 
	 else
	 {
	 	printf("0");
	 }
	 
 } 

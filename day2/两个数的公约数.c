#include<stdio.h>
void main()
{
	printf("请输入两个数：");
	int a,b,i;
	scanf("%d%d",&a,&b);
	int n=a;
	if(n>b)
	n=b;
	for( i=n;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			printf("最大公约数为：%d\n",i);
			break;
		}
	}
	
 } 

#include<stdio.h>
void main()
{
	printf("��������������");
	int a,b,i;
	scanf("%d%d",&a,&b);
	int n=a;
	if(n>b)
	n=b;
	for( i=n;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
		{
			printf("���Լ��Ϊ��%d\n",i);
			break;
		}
	}
	
 } 

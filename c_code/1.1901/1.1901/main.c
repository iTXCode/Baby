#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void ADD1()
{
	int i;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
	}
	printf("1-100累加和=%d\n",sum);
}
void ADD2()
{
	int sum=0;
	int n=100;
	sum=n*(n+1)/2;
	printf("1-100累加和=%d\n",sum);
}

void menu()
{
	printf("******************************\n");
	printf("*****      1.方法一      *****\n");
	printf("*****      2.方法二      *****\n");
	printf("*****      0.退出程序    *****\n");
	printf("******************************\n");
}
int main()
{
	int i=0;
	int sum=0;
	int input=0;
	do
	{
		menu();
		printf("请输入你的选择:");
		scanf("%d",&input);
	switch(input)
	{
	case 1:
		ADD1();
		break;
	case 2:
		ADD2();
		break;
	case 0:
		printf("退出程序!\n");
		break;
	default:
		printf("输入错误,请重新输入!\n");
		break;
	}
	}while(input);
	return 0;
}
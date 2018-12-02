#define _CRT_SECURE_NO_WARNINGS 1


//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//
//int main()
//{
//    const char arr[]="If you really want it!";
//	char *p=(char *)malloc(strlen(arr)+1);
//	if(!p)
//	{
//		return NULL;
//	}
//	strcpy(p,arr);
//	free(p);
//	printf("%s\n",*p);
//	return 0;
//}


//#include<stdio.h>
//char *Getmemory(void)
//{
//	char p[]="hellow bit!";
//	return p;
//}
//
//int main()
//{
//	char* str=NULL;
//	str=Getmemory();
//	return 0;
//}


#include "xinxi.h"



void menu()
{
	printf("****************************\n");
	printf("****1.添加联系人信息  ******\n");
	printf("****2.删除指定联系人信息****\n");
	printf("****3.查找指定联系人信息****\n");
	printf("****4.修改指定联系人信息****\n");
	printf("****5.显示所有联系人信息****\n");
	printf("****6.清空所有联系人    ****\n");
	printf("***7.以名字排序所有联系人***\n");
	printf("***8.保存联系人到文件   ****\n");
	printf("***9.    加载联系人   ******\n");
	printf("***0.   退出程序       *****\n");
	printf("***************************\n");
}
struct student          //姓名、性别、年龄、电话、住址  
{
	char name[20];
	char sex[10];
	int age;
	int num;
	char addr[20];
};

int main()
{
	int input;
	struct student stu[N];
	do
	{
        menu();
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("添加联系人信息:>\n");
			Addmessage(stu);
			break;
		case 2:
			printf("删除指定联系人信息:>\n");
			break;
		case 3:
			printf("查找指定联系人信息:>\n");
			break;
		case 4:
			printf("修改指定联系人信息:>\n");
			break;
		case 5:
				printf("显示所有联系人信息:>\n");
			break;
		case 6:
			printf("清空所有联系人:>\n");
			break;
		case 7:
			printf("以名字排序所有联系人:>\n");
			break;
		case 8:
			printf("保存联系人到文件 :>\n");
			break;
		case 9:
			printf("加载联系人:>\n");
			break;
		case 0:
			printf("退出程序:>\n");
			break;
		default:
			printf("输入错误，请重新输入。\n");
			break;
		}
	}while(input);
	return 0;
}



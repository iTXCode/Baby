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
	printf("****1.�����ϵ����Ϣ  ******\n");
	printf("****2.ɾ��ָ����ϵ����Ϣ****\n");
	printf("****3.����ָ����ϵ����Ϣ****\n");
	printf("****4.�޸�ָ����ϵ����Ϣ****\n");
	printf("****5.��ʾ������ϵ����Ϣ****\n");
	printf("****6.���������ϵ��    ****\n");
	printf("***7.����������������ϵ��***\n");
	printf("***8.������ϵ�˵��ļ�   ****\n");
	printf("***9.    ������ϵ��   ******\n");
	printf("***0.   �˳�����       *****\n");
	printf("***************************\n");
}
struct student          //�������Ա����䡢�绰��סַ  
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
			printf("�����ϵ����Ϣ:>\n");
			Addmessage(stu);
			break;
		case 2:
			printf("ɾ��ָ����ϵ����Ϣ:>\n");
			break;
		case 3:
			printf("����ָ����ϵ����Ϣ:>\n");
			break;
		case 4:
			printf("�޸�ָ����ϵ����Ϣ:>\n");
			break;
		case 5:
				printf("��ʾ������ϵ����Ϣ:>\n");
			break;
		case 6:
			printf("���������ϵ��:>\n");
			break;
		case 7:
			printf("����������������ϵ��:>\n");
			break;
		case 8:
			printf("������ϵ�˵��ļ� :>\n");
			break;
		case 9:
			printf("������ϵ��:>\n");
			break;
		case 0:
			printf("�˳�����:>\n");
			break;
		default:
			printf("����������������롣\n");
			break;
		}
	}while(input);
	return 0;
}



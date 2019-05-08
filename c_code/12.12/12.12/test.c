#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


void menu()
{
	printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
	printf("#*#1.添加联系人    2.删除联系人   #*#\n");
	printf("#*#3.修改联系人    4.查找联系人   #*#\n");
	printf("#*#5.打印联系人    6.对联系人排序 #*#\n");
	printf("#*#0.退出程序                     #*#\n");
	printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
}


void text()
{
	int input;
	Contact con;
	InitContact(&con);
	do
	{
		menu( );
		printf("请输入您的选择:");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddInformation(&con);
			break;
		case DEL:
			Delcontact(&con);
			break;
		case MODEFY:
			ModefyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出程序!\n");
			break;
		default :
			printf("输入错误，请重新输入!\n");
			break;
		}
	}while(input);
}


int main()
{
	text( );
	return 0;
}
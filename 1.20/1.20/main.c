#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


void menu()
{
	printf("*************************************\n");
	printf("***1.添加联系人    2.删除联系人   ***\n");
	printf("***3.修改联系人    4.查找联系人   ***\n");
	printf("***5.打印联系人    6.对联系人排序 ***\n");
	printf("***0.退出程序                     ***\n");
	printf("*************************************\n");
}


void test()
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
			AddInformation(&con);  //添加人员信息
			break;
		case DEL:
			Delcontact(&con);  //删除人员信息
			break;
		case MODEFY:
			ModefyContact(&con);//修改人员信息
			break;
		case SEARCH:
			SearchContact(&con);//查找人员信息
			break;
		case SHOW:
			ShowContact(&con);  //打印当前通讯录
			break;
		case SORT:
			SortContact(&con); //对当前通讯录按姓名排序
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
	test( );
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


void menu()
{
	printf("#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#\n");
	printf("#*#1.�����ϵ��    2.ɾ����ϵ��   #*#\n");
	printf("#*#3.�޸���ϵ��    4.������ϵ��   #*#\n");
	printf("#*#5.��ӡ��ϵ��    6.����ϵ������ #*#\n");
	printf("#*#0.�˳�����                     #*#\n");
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
		printf("����������ѡ��:");
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
			printf("�˳�����!\n");
			break;
		default :
			printf("�����������������!\n");
			break;
		}
	}while(input);
}


int main()
{
	text( );
	return 0;
}
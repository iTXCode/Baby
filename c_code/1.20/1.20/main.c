#define _CRT_SECURE_NO_WARNINGS 1


#include"contact.h"


void menu()
{
	printf("*************************************\n");
	printf("***1.�����ϵ��    2.ɾ����ϵ��   ***\n");
	printf("***3.�޸���ϵ��    4.������ϵ��   ***\n");
	printf("***5.��ӡ��ϵ��    6.����ϵ������ ***\n");
	printf("***0.�˳�����                     ***\n");
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
		printf("����������ѡ��:");
		scanf("%d",&input);
		switch(input)
		{
		case ADD:
			AddInformation(&con);  //�����Ա��Ϣ
			break;
		case DEL:
			Delcontact(&con);  //ɾ����Ա��Ϣ
			break;
		case MODEFY:
			ModefyContact(&con);//�޸���Ա��Ϣ
			break;
		case SEARCH:
			SearchContact(&con);//������Ա��Ϣ
			break;
		case SHOW:
			ShowContact(&con);  //��ӡ��ǰͨѶ¼
			break;
		case SORT:
			SortContact(&con); //�Ե�ǰͨѶ¼����������
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
	test( );
	return 0;
}
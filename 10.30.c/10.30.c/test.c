#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu( )
{
	printf("************************\n");
	printf("********  1.play  ******\n");
	printf("********  0.exit  ******\n");
	printf("************************\n");
}
void game( )
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
	InitBoard(mine,ROWS,COLS,'0');
	DisplayBoard(mine,ROW,COL);
	InitBoard(show,ROWS,COLS,'*');
	DisplayBoard(show,ROW,COL);
	
	//������
	SetMine(mine,ROW,COL);
	//�ų���
	DelectMine(mine,show,ROW,COL);
}	


int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu( );
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			game( );
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
				printf("����������������룡>\n");
				break;
		}

	}while(input);
	return 0;
}
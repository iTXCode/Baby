#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"

void menu()
{
	printf("******************\n");
	printf("******0.exit******\n");
	printf("******1.paly******\n");
	printf("*****2.������*****\n");
	printf("******************\n");
}

//�������ԵĶԾ�
void game()
{
	char ret=0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DispiayBoard(board,ROW,COL);
	while(1)
	{
		Player1(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		if(ret!= ' ')
			break;
	    DispiayBoard(board,ROW,COL);
		
		Computer(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		if(ret!= ' ')
			break;
		DispiayBoard(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		
	}
	if(ret=='X')
	{
			printf("���ʤ��:>\n");
	DispiayBoard(board,ROW,COL);
	}
	else if(ret=='0')
	{
			printf("����ʤ��:>\n");
	DispiayBoard(board,ROW,COL);
	}
		else if(ret =='F')
			printf("ƽ��:>\n");
}
// �������ҵĶԾ�
void men_game( )
{
	char ret=0;
	char board[ROW][COL]={0};
	InitBoard(board,ROW,COL);
	DispiayBoard(board,ROW,COL);
	while(1)
	{
		Player1(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		if(ret!= ' ')
			break;
	    DispiayBoard(board,ROW,COL);
		
		Player2(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		if(ret!= ' ')
			break;
		DispiayBoard(board,ROW,COL);
		ret = Is_Win(board,ROW,COL);
		
	}
	if(ret=='X')
	{
			printf("���1ʤ��:>\n");
	DispiayBoard(board,ROW,COL);
	}
	else if(ret=='0')
	{
			printf("���2ʤ��:>\n");
	DispiayBoard(board,ROW,COL);
	}
		else if(ret =='F')
		{
			printf("ƽ��:>\n");
	        DispiayBoard(board,ROW,COL);
	     }

}

int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
	menu( );
	//menu2( );
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
				game( );
				break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		case 2:
			men_game( );
			break;
		default:
				break;
		}

	}while(input);
    return 0;
}
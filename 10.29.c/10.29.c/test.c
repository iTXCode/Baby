#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"

void menu()
{
	printf("******************\n");
	printf("******0.exit******\n");
	printf("******1.paly******\n");
	printf("*****2.人与人*****\n");
	printf("******************\n");
}

//玩家与电脑的对决
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
			printf("玩家胜利:>\n");
	DispiayBoard(board,ROW,COL);
	}
	else if(ret=='0')
	{
			printf("电脑胜利:>\n");
	DispiayBoard(board,ROW,COL);
	}
		else if(ret =='F')
			printf("平局:>\n");
}
// 玩家与玩家的对决
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
			printf("玩家1胜利:>\n");
	DispiayBoard(board,ROW,COL);
	}
	else if(ret=='0')
	{
			printf("玩家2胜利:>\n");
	DispiayBoard(board,ROW,COL);
	}
		else if(ret =='F')
		{
			printf("平局:>\n");
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
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
		case 1:
				game( );
				break;
		case 0:
			printf("退出游戏\n");
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
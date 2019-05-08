#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void InitBoard(char arr[ROWS][COLS],int rows,int cols,char n )
{
	memset(&arr[0][0],n,rows*cols*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[ROWS][COLS],int row,int col)
{
	int i,j;
	printf("-----------------------------\n");
	for(i=0;i<=col;i++)
	{
		printf("%d ",i);	
	}
	printf("\n");
	
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
             printf("%c ",arr[i][j]);
				
		}
		printf("\n");
	}
	
	printf("-----------------------------\n");
}

void SetMine(char mine[ROWS][COLS],int row,int col)
{
	
	int count=Easycount;
	while(count)
	{
	    int x=rand()%row+1;
	    int y=rand()%col+1;
		if(mine[x][y]=='0')
		{
			mine[x][y]='1';
				count--;
		}

	}
    
}
void DelectMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
   int x=0;
   int y=0;
   int i=0;
   while(1)
   {
	   printf("������Ҫ���ӵ�����:>");
       scanf("%d%d",&x,&y);
	   if(x>=1 && x<=row && y>=1 && y<=col)
	   {
		   
            if(mine[x][y]=='1') 
			{
				printf("���ź����㱻ը���ˣ�\n");
				DisplayBoard(show,row,col);
				break;
			}
			else 
			{
				int count=AddMine(mine,x,y);
				show[x][y] = count+'0';
				
				DisplayBoard(show,row,col);
				i++;
				
				if(i == row*col- Easycount)
               {
	                 printf("��ϲ�㣬���׳ɹ���������\n");
	                 DisplayBoard(mine,row,col);
					 break;
                }
			}
	   }
	   else 
	   {
		   printf("��������겻�Ϸ������������룡\n");
	   }
	   
   }
   
}

//�����������������Χ�ĵ�����
int AddMine(char mine[ROWS][COLS], int x, int y)
{
		return mine[x-1][y]+
			mine[x-1][y-1]+
			mine[x][y-1]+
			mine[x+1][y-1]+
			mine[x+1][y]+
			mine[x+1][y+1]+
			mine[x][y+1]+
			mine[x-1][y+1] - 8*'0';

}

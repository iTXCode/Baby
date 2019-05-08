#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"



void InitBoard(char arr[ROW][COL],int row,int col)
{
    memset( &arr[0][0],' ',row*col*sizeof(arr[0][0]));

}
void DispiayBoard(char arr[ROW][COL],int row,int col)
{
	int i=0;
	printf("****************\n");
	for(i=0;i < row;i++)
	{
		int j=0;
		for(j=0; j<col;j++)
		{
			printf(" %c ",arr[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
			
		}
		printf("\n");
		
		if(i<row-1)
		{
			for(j=0; j<col; j++ )
			{
				printf("---");
			    if(j<col-1)
				{
					printf("|");
				}
			     
		     }
		}
		printf("\n");
		
	}
	printf("****************\n");
}
//���1��
void Player1(char arr[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	
	while(1)
	{
		printf("�����\n");
		printf("�����������Ҫ���ӵ�����:>");
	    scanf("%d%d",&x,&y);
	   if (x>=1 && x<=row && y>=1 && y<=col )
	   {
		   if( arr[x-1][y-1] ==' ')
		    {
			   arr[x-1][y-1]='X';
			   break;
		    }
		   else
		   { 
			 printf("��������걻ռ�ã����������룡\n"); 
		   }
	    }
	 else
	   {
		 printf("���������Ƿ������������룡\n");
	   }
	}
	
}

//���2��
void Player2(char arr[ROW][COL],int row,int col)
{
    
	int x=0;
	int y=0;
	
	while(1)
	{
		printf("���2��\n");
		printf("�����������Ҫ���ӵ�����:>");
	    scanf("%d%d",&x,&y);
	   if (x>=1 && x<=row && y>=1 && y<=col )
	   {
		   if( arr[x-1][y-1] ==' ')
		    {
			   arr[x-1][y-1]='0';
			   break;
		    }
		   else
		   { 
			 printf("��������걻ռ�ã����������룡\n"); 
		   }
	    }
	 else
	   {
		 printf("���������Ƿ������������룡\n");
	   }
	}
	
}

//������
void Computer(char arr[ROW][COL],int row,int col)
{
	int x=0;
	int y=0;
	printf("������:> \n");
	while(1)
	{
		int i=0;
		int j=0;
		x=rand()%row;
	    y=rand()%col;
		
		if( arr[x][y]==' ')
		{
	    {
		    arr[x][y]='0';
			
		}
		break;
		}	
	
	}

}
//�ж�ʤ��
char Is_Win(char arr[ROW][COL],int row,int col)

{
	int i=0;
	for(i=0;i<row;i++)
	{
		if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][2]!=' ')
		{
			return arr[i][0] ;
		}
	}
	for(i=0;i<col;i++)
	{
        if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[2][i]!=' ')
	    return arr[0][i];
	}
	if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[2][2]!=' ')
	{
		return arr[0][0];
	}
		if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]&&arr[2][0]!=' ')
		{
			return arr[1][1];
		}
		if(Full(arr,row,col)==1)
		{
			return 'F';
		}
		return ' ';
}

//�ж������Ƿ�����
int Full(char arr[ROW][COL],int row,int col)
{
     int i=0,j=0;
	 for(i=0;i<row;i++)
	 {
		 for(j=0;j<col;j++)
		 {
			 if(arr[i][j] ==' ')
				 return 0;
			 
		 } 
	 
	 }
	 return 1;
	 
}

	


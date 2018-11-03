#ifndef __GAME_H__
#define __GAME_H__

#include<stdio.h>
#include<memory.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3


void InitBoard(char arr[ROW][COL],int row,int col);
void DispiayBoard(char arr[ROW][COL],int row,int col);
void Player1(char arr[ROW][COL],int row,int col);
void Player2(char arr[ROW][COL],int row,int col);
void Computer(char arr[ROW][COL],int row,int col);
char Is_Win(char arr[ROW][COL],int row,int col);
int Full(char arr[ROW][COL],int row,int col);

#endif  //__GAME_H__
#ifndef _GAME_H_
#define _GAME_H_

#include<stdio.h>
#include<time.h>
#include<string.h>
#include<stdlib.h>




#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define Easycount 10

void InitBoard(char arr[ROWS][COLS],int rows,int cols,char n);
void DisplayBoard(char arr[ROWS][COLS],int row,int col);
void SetMine(char mine[ROWS][COLS],int row,int col);
void DelectMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int AddMine(char mine[ROWS][COLS], int row, int col);





#endif //_GAME_H_
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define L_Count 10

//ÉùÃ÷
void Int(char board[ROWS][COLS],int rows,int cols,char set);
void Display(char board[ROWS][COLS],int row,int col);
void Put(char board[ROWS][COLS],int row,int col);
void Sweap(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
int Zhangkai(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int* win);
int Get(char mine[ROWS][COLS],int x,int y);
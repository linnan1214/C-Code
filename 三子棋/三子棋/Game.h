#include<stdio.h>
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>

//º¯ÊýÉùÃ÷
void Intboard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL],int row,int col);
void Playermove(char board[ROW][COL],int row,int col);
void Computermove(char board[ROW][COL],int row,int col);
char Win(char board[ROW][COL],int row,int col);
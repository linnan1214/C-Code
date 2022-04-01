#include"Game.h"

void Intboard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int	j=0;
		for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}
//	                |   |     设计一个界面为board
//	             ---|---|---
//			        |   |   
//				 ---|---|---
//				    |   |   
void Displayboard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<row-1)
		for(j=0;j<col;j++)
		{
			printf("---");
			if(j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
//输入1-3的数字，玩家在数组中打印出 '*'
void Playermove(char board[ROW][COL],int row,int col)
{
	  int x=0;
	  int y=0;
	  printf("玩家走:>\n");
	  while(1)
	  {	  
	     printf("请输入坐标:>");
	     scanf("%d %d",&x,&y);//scanf ---> &
		 //判断坐标的合法性
	     if(x>=1&&x<=row&&y>=1&&y<=col)
	     {
			   //要判断原来数组中是否已经有打印其他数字
			    if(board[x-1][y-1]==' ')
			    {
		           board[x-1][y-1]='*';		      
		           break;
			    }
				else
				{
		         printf("该坐标被占用\n");
				}
	     }
	     else
	       {
		     printf("坐标错误重新输入\n");
	       }
	  }
}
//电脑随机输入0-2里面的数字
void Computermove(char board[ROW][COL],int row,int col)
{
	//每次循环，xy都要重置一次最好在循环内；在外部的话1s内前后变化一致
	int x=0;
	int y=0;
	printf("电脑走:>\n");
	while(1)
	{
		x=rand()%row;
		y=rand()%col;
		if(board[x][y]==' ')
        {
			board[x][y]='#';
			break;
		}
	}	
}
//玩家赢返回*，电脑赢返回#，平局返回C
//	                |   |     
//	             ---|---|---
//			        |   |   
//				 ---|---|---
//				    |   |   
char Win(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		//竖三列  不可以连等	
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		return board[i][1];
	}
	for(j=0;j<col;j++)
	{		//横三列
			if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j]!=' ')
			return board[0][j];
	}
			//对角线
		if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		{
		    return board[1][1];
		}
		if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
		{
		    return board[1][1];
		}
		if(1==Full(board,ROW,COL))
		{
		    return 'Q';
		}
		return 'C';
}
int Full(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		int j=0;
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
				return 0;
		}
	}
	return 1;
}
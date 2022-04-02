#include"Game.h"
//初始化
void Int(char board[ROWS][COLS],int rows,int cols,char set)
{
	int i=0;
	int j=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			board[i][j]=set;
		}
	}
}
//打印棋盘，
void Display(char board[ROWS][COLS],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<=row;i++)
	{
		printf("%d ",i);
	}
		printf("\n");
	for(i=1;i<=row;i++)
	{
		printf("%d ",i);
		for(j=1;j<=col;j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
//放雷
void Put(char board[ROWS][COLS],int row,int col)
{
	int count=L_Count;
	while(count)
	{	
		int x=rand()%row+1;//设置的随机数要在循环内部；1s内随机值可能不变
	    int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
//扫雷难中难
void Sweap(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int i=0;int j=0;int x=0;int y=0;int win=0;
	while(win<ROW*COL-L_Count)
	{
		printf("请输入坐标:>");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{	
		    if(mine[x][y]=='1')
		    {
			    printf("扫到雷了，游戏结束\n");
			    Display(mine,row,col);
			    break;
		     }
		    else //不是雷
		     {		   //要通过win的值跳出循环，在通过函数要改变其值，要通过指针去作用		        						  						    
	    		 Zhangkai(mine,show,x,y,&win);	
				/* show[x][y]=Get(mine,x,y)+'0';
				 Display(show,row,col);
				 win++;*/
		      }	
		}
		 else
		 {
		   printf("坐标输入错误\n");
		 }
	 
	if(win==ROW*COL-L_Count)
	{
		printf("恭喜你，扫雷成功\n");
	}
 }
}
//1.周围没有雷 2.合法坐标 3.排除检查的点
static int Zhangkai(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int* win)
{
	int i=0;
	int j=0;
	if(x>=1&&x<=ROW&&y>=1&&y<=COL)//2.合法坐标
	{
		if(show[x][y]==' '||show[x][y]!='*')//3.排除检查的点
		{
		   return 0;
		}
		else if(Get(mine,x,y)!=0)//排除周围有雷的点
		{
			show[x][y]=Get(mine,x,y)+'0';
			Display(show,ROW,COL);
			(*win)++;
		}
		else//周围没有雷
		{
			show[x][y]=' ';
			(*win)++;
			for(i=-1;i<=1;i++)
			{
				for(j=-1;j<=1;j++)
				{
				  Zhangkai(mine,show,x+i,y+j,win);//开始引用的时候已经定义了 int* win
				  //所以这里再次引用的时候不用 是&win 与Sweap函数中区分
				}
			}
		}
	}	
}

//得到周围雷的个数,返回的是数字不是字符  数字+‘0’=‘数字’   ’数字‘-‘0’=数字
int Get(char mine[ROWS][COLS],int x,int y)
{
	
	return mine[x+1][y]+mine[x+1][y+1]
	       +mine[x+1][y-1]+mine[x][y+1]
	       +mine[x][y-1]+mine[x-1][y]
		   +mine[x-1][y+1]+mine[x+1][y-1]-8*'0';

}

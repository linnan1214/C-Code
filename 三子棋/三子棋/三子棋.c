#include"Game.h"
void menu()
{
	printf("******************************\n");
	printf("******欢迎来到三子棋游戏******\n");
	printf("*1.Play********2.No***********\n");
	printf("******************************\n");
}
void Game()
{
//	                |   |     设计一个界面为board
//	             ---|---|---
//			        |   |   
//				 ---|---|---
//				    |   |   
	int ret=0;
	char board[ROW][COL]={0};
	//将board初始化为' '
	Intboard(board,ROW,COL);
	//打印界面
	Displayboard(board,ROW,COL);
	//下棋  
	while(1)
	{    
		//玩家先玩，打印一此界面
		Playermove(board,ROW,COL);
    	Displayboard(board,ROW,COL);
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		
		//电脑走，打印此界面
		Computermove(board,ROW,COL);
		Displayboard(board,ROW,COL);
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	//玩家赢返回*，电脑赢返回#，平局返回Q，继续返回C
	if(ret=='*')
		printf("玩家赢\n");
	else if(ret=='#')
		printf("电脑赢\n");
	else 
		printf("平局\n");
	
}
void test()
{
	
	int x;
	do//这里不是死循环哪,所以不能直接用1作为死循环，应该是用do-while循环不是while
	{
		menu();
	    printf("游戏开始，请输入:>\n");
	    scanf("%d",&x);
	    switch(x)
	   {
	     case 1:  Game();
			      break;
		 case 0:  printf("退出游戏\n");
			      break;
		 default: printf("输入错误，重新输入\n");
			      break;
	    }
		
	}while(x);

}
int main()
{
	srand((unsigned)time (NULL));
	
	test();
}
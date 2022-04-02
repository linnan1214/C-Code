#define _CRT_SECURE_NO_WARNINGS
#include"Game.h"
void menu()
{
	printf("**********************************\n");
	printf("***************1.Play*************\n");
	printf("***************0.Exit*************\n");
	printf("**********************************\n");
}
void Game()
{
	//雷信息储存—>放雷—>扫雷
	//定义两个数组，存放雷图，一个后台存放，另一个展示
	char mine[ROWS][COLS]={0};//1表示雷，0为初始化
	char show[ROWS][COLS]={0};//*为初始化
	//初始化(11*11)
	Int(mine,ROWS,COLS,'0');
	Int(show,ROWS,COLS,'*');
	//打印雷盘9*9
	//Display(mine,ROW,COL);
	Display(show,ROW,COL);
	//放雷
	Put(mine,ROW,COL);
	//Display(mine,ROW,COL);
	//扫雷
	Sweap(mine,show,ROW,COL);
}
void test()
{
	int input;
	do
	{
		menu();
	    scanf("%d",&input);
	    switch(input)
	    {
     	case 1: 
		        Game();
	 	        break;
	    case 0:
		        printf("退出游戏");
		        break;
	    default: 
		        printf("输入错误，重新输入");
	     }
	}while(input);
}

int main()
{
	srand((unsigned)time(NULL));
	test();
	return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//游戏规则
//1：电脑随机生成一个1-100之间的数字
//2：玩家进行猜数字 电脑会提示猜大了或者猜小了直到玩家猜对游戏结束
//3:游戏可以重复玩，即玩家玩完一把后可选择再玩一把或者是直接退出
//void menu()
//{ 
//	
//	printf("*****欢迎来到猜数字游戏*****\n");
//	printf("********1：进入游戏*********\n");
//	printf("********0：退出游戏*********\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//1：实现1-100之间的随机数的生成
//	int random_num = rand()%100+1;//rand（）是随机数生成函数需要搭配srand((unsigned)time(NULL))使用
//	//2：进入玩家猜数字环节
//	while (1)
//	{
//		int guess = 0;//guess中储存的是玩家猜测的数字
//		printf("请输入猜测的数字：");
//		scanf("%d", &guess);
//		if (guess < random_num)
//			printf("猜小了\n");
//		else if (guess > random_num)
//			printf("猜大了\n");
//		else
//		{
//            printf("恭喜你猜对了\n");
//			break;//为了防止死循环，若猜对了应打破循环
//		}			
//	}
//}
//int main()
//{
//	srand((unsigned)time(NULL));
// 
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入你的选择：");
//		scanf("%d",&input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("游戏已经退出");
//			break;
//		}
//		else
//		{
//			printf("您输入的是无效指令，请重新输入\n");
//		}
// 
//	} while (input != 0);
//	return 0;
//}







void game()
{
	int b=0;//猜测数
	int a=0;//随机数
	a=rand()%100+1;//产生随机数1-100
	while(1)
 {
	printf("请猜数:>\n");
	scanf("%d",&b);
	if(b>a)
	{
		printf("不好意思猜大了\n");
	}
	else if(b<a)
	{
	    printf("不好意思猜小了\n");
	}
	else
	{
		printf("恭喜你猜对了\n");
		break;
	}
	
 }

}


void menu()
{
	printf("******************************\n");
	printf("*********欢迎来到游戏*********\n");
	printf("***Play.输入1***Refuse.输入0**\n");
	printf("******************************\n");
}
int main()
{
	
	srand((unsigned)time (NULL));
	int input=0;
	
	
	do
	{
	      menu();
		  scanf("%d",&input);//在循环内部而非在do-while的外部，在外部会导致死循环
		  switch(input)
		  {
		  case 1:
			  game();
			  break;
			

		  case 0:
			  printf("退出游戏\n");
			  break;

     	  default :printf("重新输入，请输入0/1\n");
			  break;
		}
	}while(input);
	return 0;
}

//int main()
//{
//	srand((unsigned)time(NULL));//产生一个随机种子使rand函数产生随机值
//
//	int a=0;
//	int i=0;
//	while(i<10)
//	{
//	 a=rand()%10+1;//产生随机数为1-10，
//	 //rand()%10-> 0-9;
//
//	printf("%d\n",a);
//	i++;
//	}
//	return 0;
//}
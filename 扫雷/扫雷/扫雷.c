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
	//����Ϣ���桪>���ס�>ɨ��
	//�����������飬�����ͼ��һ����̨��ţ���һ��չʾ
	char mine[ROWS][COLS]={0};//1��ʾ�ף�0Ϊ��ʼ��
	char show[ROWS][COLS]={0};//*Ϊ��ʼ��
	//��ʼ��(11*11)
	Int(mine,ROWS,COLS,'0');
	Int(show,ROWS,COLS,'*');
	//��ӡ����9*9
	//Display(mine,ROW,COL);
	Display(show,ROW,COL);
	//����
	Put(mine,ROW,COL);
	//Display(mine,ROW,COL);
	//ɨ��
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
		        printf("�˳���Ϸ");
		        break;
	    default: 
		        printf("���������������");
	     }
	}while(input);
}

int main()
{
	srand((unsigned)time(NULL));
	test();
	return 0;
}
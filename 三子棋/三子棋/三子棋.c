#include"Game.h"
void menu()
{
	printf("******************************\n");
	printf("******��ӭ������������Ϸ******\n");
	printf("*1.Play********2.No***********\n");
	printf("******************************\n");
}
void Game()
{
//	                |   |     ���һ������Ϊboard
//	             ---|---|---
//			        |   |   
//				 ---|---|---
//				    |   |   
	int ret=0;
	char board[ROW][COL]={0};
	//��board��ʼ��Ϊ' '
	Intboard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����  
	while(1)
	{    
		//������棬��ӡһ�˽���
		Playermove(board,ROW,COL);
    	Displayboard(board,ROW,COL);
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		
		//�����ߣ���ӡ�˽���
		Computermove(board,ROW,COL);
		Displayboard(board,ROW,COL);
		ret=Win(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	//���Ӯ����*������Ӯ����#��ƽ�ַ���Q����������C
	if(ret=='*')
		printf("���Ӯ\n");
	else if(ret=='#')
		printf("����Ӯ\n");
	else 
		printf("ƽ��\n");
	
}
void test()
{
	
	int x;
	do//���ﲻ����ѭ����,���Բ���ֱ����1��Ϊ��ѭ����Ӧ������do-whileѭ������while
	{
		menu();
	    printf("��Ϸ��ʼ��������:>\n");
	    scanf("%d",&x);
	    switch(x)
	   {
	     case 1:  Game();
			      break;
		 case 0:  printf("�˳���Ϸ\n");
			      break;
		 default: printf("���������������\n");
			      break;
	    }
		
	}while(x);

}
int main()
{
	srand((unsigned)time (NULL));
	
	test();
}
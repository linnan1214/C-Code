#include<stdio.h>
#include<stdlib.h>
#include<time.h>



//��Ϸ����
//1�������������һ��1-100֮�������
//2����ҽ��в����� ���Ի���ʾ�´��˻��߲�С��ֱ����Ҳ¶���Ϸ����
//3:��Ϸ�����ظ��棬���������һ�Ѻ��ѡ������һ�ѻ�����ֱ���˳�
//void menu()
//{ 
//	
//	printf("*****��ӭ������������Ϸ*****\n");
//	printf("********1��������Ϸ*********\n");
//	printf("********0���˳���Ϸ*********\n");
//	printf("****************************\n");
//}
//void game()
//{
//	//1��ʵ��1-100֮��������������
//	int random_num = rand()%100+1;//rand��������������ɺ�����Ҫ����srand((unsigned)time(NULL))ʹ��
//	//2��������Ҳ����ֻ���
//	while (1)
//	{
//		int guess = 0;//guess�д��������Ҳ²������
//		printf("������²�����֣�");
//		scanf("%d", &guess);
//		if (guess < random_num)
//			printf("��С��\n");
//		else if (guess > random_num)
//			printf("�´���\n");
//		else
//		{
//            printf("��ϲ��¶���\n");
//			break;//Ϊ�˷�ֹ��ѭ�������¶���Ӧ����ѭ��
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
//		printf("���������ѡ��");
//		scanf("%d",&input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("��Ϸ�Ѿ��˳�");
//			break;
//		}
//		else
//		{
//			printf("�����������Чָ�����������\n");
//		}
// 
//	} while (input != 0);
//	return 0;
//}







void game()
{
	int b=0;//�²���
	int a=0;//�����
	a=rand()%100+1;//���������1-100
	while(1)
 {
	printf("�����:>\n");
	scanf("%d",&b);
	if(b>a)
	{
		printf("������˼�´���\n");
	}
	else if(b<a)
	{
	    printf("������˼��С��\n");
	}
	else
	{
		printf("��ϲ��¶���\n");
		break;
	}
	
 }

}


void menu()
{
	printf("******************************\n");
	printf("*********��ӭ������Ϸ*********\n");
	printf("***Play.����1***Refuse.����0**\n");
	printf("******************************\n");
}
int main()
{
	
	srand((unsigned)time (NULL));
	int input=0;
	
	
	do
	{
	      menu();
		  scanf("%d",&input);//��ѭ���ڲ�������do-while���ⲿ�����ⲿ�ᵼ����ѭ��
		  switch(input)
		  {
		  case 1:
			  game();
			  break;
			

		  case 0:
			  printf("�˳���Ϸ\n");
			  break;

     	  default :printf("�������룬������0/1\n");
			  break;
		}
	}while(input);
	return 0;
}

//int main()
//{
//	srand((unsigned)time(NULL));//����һ���������ʹrand�����������ֵ
//
//	int a=0;
//	int i=0;
//	while(i<10)
//	{
//	 a=rand()%10+1;//���������Ϊ1-10��
//	 //rand()%10-> 0-9;
//
//	printf("%d\n",a);
//	i++;
//	}
//	return 0;
//}
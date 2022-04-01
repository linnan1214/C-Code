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
//	                |   |     ���һ������Ϊboard
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
//����1-3�����֣�����������д�ӡ�� '*'
void Playermove(char board[ROW][COL],int row,int col)
{
	  int x=0;
	  int y=0;
	  printf("�����:>\n");
	  while(1)
	  {	  
	     printf("����������:>");
	     scanf("%d %d",&x,&y);//scanf ---> &
		 //�ж�����ĺϷ���
	     if(x>=1&&x<=row&&y>=1&&y<=col)
	     {
			   //Ҫ�ж�ԭ���������Ƿ��Ѿ��д�ӡ��������
			    if(board[x-1][y-1]==' ')
			    {
		           board[x-1][y-1]='*';		      
		           break;
			    }
				else
				{
		         printf("�����걻ռ��\n");
				}
	     }
	     else
	       {
		     printf("���������������\n");
	       }
	  }
}
//�����������0-2���������
void Computermove(char board[ROW][COL],int row,int col)
{
	//ÿ��ѭ����xy��Ҫ����һ�������ѭ���ڣ����ⲿ�Ļ�1s��ǰ��仯һ��
	int x=0;
	int y=0;
	printf("������:>\n");
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
//���Ӯ����*������Ӯ����#��ƽ�ַ���C
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
		//������  ����������	
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][1]!=' ')
		return board[i][1];
	}
	for(j=0;j<col;j++)
	{		//������
			if(board[0][j]==board[1][j]&&board[1][j]==board[2][j]&&board[1][j]!=' ')
			return board[0][j];
	}
			//�Խ���
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
#include"Game.h"
//��ʼ��
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
//��ӡ���̣�
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
//����
void Put(char board[ROWS][COLS],int row,int col)
{
	int count=L_Count;
	while(count)
	{	
		int x=rand()%row+1;//���õ������Ҫ��ѭ���ڲ���1s�����ֵ���ܲ���
	    int y=rand()%col+1;
		if(board[x][y]=='0')
		{
			board[x][y]='1';
			count--;
		}
	}
}
//ɨ��������
void Sweap(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
	int i=0;int j=0;int x=0;int y=0;int win=0;
	while(win<ROW*COL-L_Count)
	{
		printf("����������:>");
		scanf("%d%d",&x,&y);
		if(x>=1&&x<=row&&y>=1&&y<=col)
		{	
		    if(mine[x][y]=='1')
		    {
			    printf("ɨ�����ˣ���Ϸ����\n");
			    Display(mine,row,col);
			    break;
		     }
		    else //������
		     {		   //Ҫͨ��win��ֵ����ѭ������ͨ������Ҫ�ı���ֵ��Ҫͨ��ָ��ȥ����		        						  						    
	    		 Zhangkai(mine,show,x,y,&win);	
				/* show[x][y]=Get(mine,x,y)+'0';
				 Display(show,row,col);
				 win++;*/
		      }	
		}
		 else
		 {
		   printf("�����������\n");
		 }
	 
	if(win==ROW*COL-L_Count)
	{
		printf("��ϲ�㣬ɨ�׳ɹ�\n");
	}
 }
}
//1.��Χû���� 2.�Ϸ����� 3.�ų����ĵ�
static int Zhangkai(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y,int* win)
{
	int i=0;
	int j=0;
	if(x>=1&&x<=ROW&&y>=1&&y<=COL)//2.�Ϸ�����
	{
		if(show[x][y]==' '||show[x][y]!='*')//3.�ų����ĵ�
		{
		   return 0;
		}
		else if(Get(mine,x,y)!=0)//�ų���Χ���׵ĵ�
		{
			show[x][y]=Get(mine,x,y)+'0';
			Display(show,ROW,COL);
			(*win)++;
		}
		else//��Χû����
		{
			show[x][y]=' ';
			(*win)++;
			for(i=-1;i<=1;i++)
			{
				for(j=-1;j<=1;j++)
				{
				  Zhangkai(mine,show,x+i,y+j,win);//��ʼ���õ�ʱ���Ѿ������� int* win
				  //���������ٴ����õ�ʱ���� ��&win ��Sweap����������
				}
			}
		}
	}	
}

//�õ���Χ�׵ĸ���,���ص������ֲ����ַ�  ����+��0��=�����֡�   �����֡�-��0��=����
int Get(char mine[ROWS][COLS],int x,int y)
{
	
	return mine[x+1][y]+mine[x+1][y+1]
	       +mine[x+1][y-1]+mine[x][y+1]
	       +mine[x][y-1]+mine[x-1][y]
		   +mine[x-1][y+1]+mine[x+1][y-1]-8*'0';

}

#include"Game.h"
void initBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void displayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("---------------------------\n");
	printf("---------------------------\n");
	int i, j;
	for (j = 0; j <= COL; j++)
	{
		printf("|---");
	}
	printf("|\n");
	for (i = 0; i <= COL; i++)
	{
		printf("| %d ", i);
	}
	printf("|\n");
	for (i = 0; i < ROW; i++) {

		for (j = 0; j <= COL; j++) {
			printf("|---");
		}
		printf("|\n");
		printf("| %d ", i + 1);
		for (j = 0; j < COL; j++) {
			printf("| %c ", board[i+1][j+1]);

		}
		printf("|\n");

	}
	for (j = 0; j <= COL; j++) 
	{
		printf("|---");
	}
	printf("|\n");
}

void setMine(char mine[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0, count = EASY_COUNT;
	while (count)
	{//�˴�����srand((unsigned int)time(NULL))����Ϊ�˷���ʱ���������������꣬����λ������Ϊ��
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{//�����λ��Ϊ0������λ����Ϊ1��count-1����Ϊ�����������ͬ�������֣����ԣ�ѭ������>=count
			mine[x][y] = '1';
			count--;
		}
	}
}
void fineBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	printf("��������Ҫ�Ų��λ��>\n");
	int x,y;
	int win=0;
	while (win<row*col-EASY_COUNT)//����ѭ������ҽ������ף���������win��ֵ
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//�ж���������Ϸ���
		{
			if (mine[x][y] == '1')//��Ϊ1������ը
			{
				printf("���ź����㱻ը���ˣ�\n");
				displayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				expandBoard(mine,show,x,y,&win);//�ú����±߽���
				displayBoard(show, ROW, COL);
			}

		}
		else
		{
			printf("�����������Ƿ�������������\n");
		}
	}
	if (win ==  row * col - EASY_COUNT)
	{
		printf("��ϲ����ʤ����\n");
		displayBoard(mine, ROW, COL);
	}
}
static int expandBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int*win)
{//��Ϊ��Ҫͨ���ݹ�չ�������Եݹ��λ��ÿ�ν���ʱ���ж�λ�õĺϷ���
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int i=0;
		int j=0;
		if (show[x][y] == ' ' || show[x][y] != '*')
			return 0;//�ų��Ѿ������ĵ㣬�����γ����ݹ�
		else if (getCount(mine, x, y) != 0)//getCount���������±߽���
		{//����λ����Χ����Ҳ������еݹ飬��λ�ö�Ӧshow���̱�Ϊ���֣�win��ֵ+1��Ҳ���Ų���һ��λ�õ������
			show[x][y] = getCount(mine, x, y) + '0';
			return (*win)++;
		}
		else//��λ����Χ������Ϊ0ʱ�Ż������һ��
		{
			show[x][y] = ' ';//����λ����Ϊ�� ��������win+1
			(*win)++;
			for ( i = -1; i <= 1; i++)
			{
				for (j = -1; j <= 1; j++)
				{
					expandBoard(mine, show, x + i, y + j, win);
				}
			}
		}
	}
}
static int getCount(char mine[ROWS][COLS], int x, int y)
{
	int i, j;
	int count = 0;
	for (i = -1; i <= 1; i++)//��ѭ������λ�����ھŹ�������Ų�
	{
		for (j = -1; j <= 1; j++)
		{
			count = count+mine[x + i][y + j]-'0';
		}
	}
	return count;
}

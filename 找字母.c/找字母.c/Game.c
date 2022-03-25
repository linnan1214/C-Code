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
	{//此处解释srand((unsigned int)time(NULL))，是为了返回时间戳以随机生成坐标，将该位置设置为雷
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (mine[x][y] == '0')
		{//如果该位置为0，将该位置置为1，count-1，因为可能随机生成同样的数字，所以，循环次数>=count
			mine[x][y] = '1';
			count--;
		}
	}
}
void fineBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	printf("请输入你要排查的位置>\n");
	int x,y;
	int win=0;
	while (win<row*col-EASY_COUNT)//设置循环让玩家进行排雷，不断增加win的值
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)//判断输入坐标合法性
		{
			if (mine[x][y] == '1')//若为1，即被炸
			{
				printf("很遗憾，你被炸死了！\n");
				displayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				expandBoard(mine,show,x,y,&win);//该函数下边解释
				displayBoard(show, ROW, COL);
			}

		}
		else
		{
			printf("你输入的坐标非法，请重新输入\n");
		}
	}
	if (win ==  row * col - EASY_COUNT)
	{
		printf("恭喜你获得胜利！\n");
		displayBoard(mine, ROW, COL);
	}
}
static int expandBoard(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y,int*win)
{//因为需要通过递归展开，所以递归的位置每次进入时先判断位置的合法性
	if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
	{
		int i=0;
		int j=0;
		if (show[x][y] == ' ' || show[x][y] != '*')
			return 0;//排除已经检查过的点，避免形成死递归
		else if (getCount(mine, x, y) != 0)//getCount（）函数下边解释
		{//若该位置周围有雷也不会进行递归，该位置对应show棋盘变为数字，win的值+1（也是排查了一个位置的情况）
			show[x][y] = getCount(mine, x, y) + '0';
			return (*win)++;
		}
		else//该位置周围雷数量为0时才会进入这一步
		{
			show[x][y] = ' ';//将该位置置为‘ ’，并让win+1
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
	for (i = -1; i <= 1; i++)//该循环将该位置所在九宫格进行排查
	{
		for (j = -1; j <= 1; j++)
		{
			count = count+mine[x + i][y + j]-'0';
		}
	}
	return count;
}

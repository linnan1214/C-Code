#define _CRT_SECURE_NO_WARNINGS 1
//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多
//的人为社长.
//一行，字符序列，包含A或B，输入以字符0结束。
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
#include<stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	while (((a = getchar()) != '0') && a != EOF)
		//第二处是不能用getchar()再去接收，因为用一次就从缓冲区读取一个字符
	{
		if (a == 'A')
			count++;
		else if (a = 'B')
			count--;
	}
	if (count > 0)
		printf("A");
	else if (count < 0)
		printf("B");
	else
		printf("E");
	return 0;
}

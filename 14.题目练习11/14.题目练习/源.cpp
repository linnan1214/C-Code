#define _CRT_SECURE_NO_WARNINGS 1
//判断三角形是等边三角形还是等腰三角形还是普通三角形
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while(scanf("%d %d %d", &a, &b, &c)!=EOF);
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//				printf("等边三角形");
//			else if ((a = b && a != c) || a == c && a != b || b == c && b != a)
//				printf("等腰三角形");
//			else
//				printf("普通三角形");
//		}
//		else
//			printf("不是三角形");
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//满足条件就是三角形
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}
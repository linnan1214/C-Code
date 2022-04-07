#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第一题
//考察%md输出宽度为m的10进制整数，m表示输出的宽度
// 十六进制以 15宽度的10进制输出
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n", a);
//	return 0;
//}
//第二题
//printf的返回值 返回打印字符的个数
//输出printf(“Hello world!”)的返回值吗？
//int main()
//{
//	printf("%d",printf("Hellow world\n"));//--13
//	return 0;
//}
//第三题
//从键盘任意输入一个字符，判断是否为字母
//int main()
//{
//	int ch = 0;
//		while((ch = getchar()) != EOF)
//	{
//			if ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))
//			{
//				printf("YSE");
//			}
//			else
//			{
//				printf("NO");
//			}
//			getchar();
//	}
//	return 0;
//}
// 第四题
//输入一个字符，用它构造一个三角形金字塔。
//    1
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1
int main()
{
	int i = 0;
	char a = 0;
	scanf("%ch", &a);
	//控制行
	for (i = 0;i<5; i++)
	{
		int j = 0;
		//控制输出
		for (j = 0; j <5-i-1; j++)//
			//for (j = 0; j <5; j++)
		{
			printf(" ");
		}
		for (j = 0; j <=i ; j++)//
		{
			printf("%c ", a);
		}
		printf("\n");
	}
	return 0;
}
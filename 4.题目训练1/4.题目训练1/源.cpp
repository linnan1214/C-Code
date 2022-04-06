#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
//第一题
//输入一组数据反向输出e.g 输入1234 输出4321
//要求输入任意一行数据，反向输出
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//1234--4--123--3--12--2--1---0
//	while (a )
//	{
//		printf("%d", a % 10);
//		a = a / 10;
//	}
//	
//	return 0;
//}
//第二题
///实现字母的大小写转换。多组输入输出
// 多组输入过程中要注意“回车”也是字母，所以要“吸收”(getchar())掉该字母。
//int main()
//{
//	char a = 0;
//	printf("输入一个字母");
//	//scanf("%c", &a);
//	a = getchar();
//	//判断是否输入正确
//	
//	return 0;
//}
//代码1-这个代码对吗？
//int main()
//{
//	int ch = 0;
//	//循环数据输入
//	while ((ch = getchar()) != EOF)
//	{
//		printf("%c\n", (ch + 32));
//	}
//	return 0;
//}
//代码2-正确的代码实现
int main()
{
	int ch = 0;
	//循环数据输入
	//getchar/putchar是一个函数，读取/打印一个字符
	// getchar返回类型是整数，putchar()传的参数为，整形。
	// getchar使用EOF来判断是否为结束
	// 输入缓冲取：当键盘输入A的时候，并没有录入缓冲区，只用按回车键的时候才会录入
	// 同时也会录入"\n",但由于getchar 的特性它只会录入一个字符
	// 所以就会有 "\n"，滞留在缓冲区，因此我们需要在使用一次，清空缓冲区
	// 使我们能够，连续输入大写字母，并输出小写字母，不会含有 "*" 
	// "\n"+32--"*"
	while ((ch = getchar()) != EOF)
	{
		/*putchar(ch);
		printf("\n");*/
		printf("%c\n", (ch + 32));
		getchar();//处理多余的\n字符
	}
	return 0;
}
//第三题
//打印 v v v
//      v v
//       v
//int main()
//{
//	printf("v v v\n v v \n  v\n");//充分理解\n的意义
//	printf("v v v\n");
//	printf(" v v\n");
//	printf("  v\n");
//	return 0;
//}
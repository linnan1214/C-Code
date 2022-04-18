#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//输入描述：多组输入，每行输入包括三个整数表示的分数（0~100），用空格分隔。
//输出描述：针对每行输入，输出为一行，即三个分数中的最高分。
//输入：  94 98 99
//        100 88 60
// 输出： 99
//        100
//
// 1.多组输入
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a >= b && a >= c)
//			printf("%d", a);
//		else if (b >= a && b >= c)
//			printf("%d", b);
//		else
//			printf("%d", c);	
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//		int score[3] = { 0 };
//	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
//	{
//		int max = 0;//每一组测试，max都恢复到0
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (score[i] > max)
//				max = score[i];
//		}
//		printf("%d\n", max);
//	}
//
//	return 0;
//}

//KiKi开始学习英文字母，BoBo老师告诉他，有五个字母A(a), E(e), I(i), O(o),U(u)称为元音，其他所有字
//母称为辅音，请帮他编写程序判断输入的字母是元音（Vowel）还是辅音（Consonant）。
//输入描述：多组输入，每行输入一个字母
//输出描述：针对每组输入，输出为一行，如果输入字母是元音（包括大小写），输出“Vowel”，如果输入字母是非元音，
// 输出“Consonant”。 
// 输入：A
//       b
// 输出：Vowel
//       Consonant

//1.多组输入
//int main()
//{
//	char a = 0;
//	while ((scanf("%c",&a) != EOF))//
//	{
//		if (a == 'A' || a == 'a' || a == 'E' || a == 'e' ||
//			a == 'I' || a == 'i' || a == 'O' || a == 'o'
//			|| a == 'U' || a == 'u')
//			printf("Vowel");
//		else
//			printf(" Consonant");
//		getchar();
//	}
//	return 0;
//}

////方法1
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//		getchar();//去除每个字符后的\n
//	}
//	return 0;
//}

//方法2
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//在%c的前面写一个空格会消化掉前面所有的空白字符，然后读取一个字符
//	while (scanf(" %c", &ch) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}
\
//方法3
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//在%c的后边发给一个'\n'，其实在输入时候就会消化掉这个\n字符
//	//不会为下次留下空白字符的隐患
//	while (scanf("%c\n", &ch) != EOF)
//	{
//			int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	a = getchar();
//	printf("%d %c", a,a);
//	return 0;
//}
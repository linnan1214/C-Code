#define _CRT_SECURE_NO_WARNINGS 1
//输入描述：一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
//输入：ABBABBAAB0
//输出：B
#include<stdio.h>
//int main()
//{
//	char a[100] = {1};
//	int a1 = 0;
//	int b1 = 0;
//	int i = 0;
//	while (a[i] != 0)
//	{
//		for (i = 0; i < 100; i++)
//		{
//			scanf("%c", &a[i]);
//		}
//		if (a[i] == 'A')
//			a1++;
//		else if (a[i] == 'B')
//			b1++;
//	}
//	if (a1 > b1)
//		printf("A");
//	else
//		printf("B");
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0;
//	int count_a = 0;
//	int count_b = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//		{
//			count_a++;
//		}
//		else if (arr[i] == 'B')
//		{
//			count_b++;
//		}
//		i++;
//	}
//	if (count_a > count_b)
//		printf("A");
//	else if (count_a < count_b)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int i = 0;
//	int flag = 0;
//	while (arr[i] != '0')
//	{
//		if (arr[i] == 'A')
//		{
//			flag++;
//		}
//		else if (arr[i] == 'B')
//		{
//			flag--;
//		}
//		i++;
//	}
//	if (flag > 0)
//		printf("A");
//	else if (flag < 0)
//		printf("B");
//	else
//		printf("E");
//	return 0;
//}

int main()
{
	char arr[100] = { 0 };
	int ch = 0;
	int flag = 0;
	int a1 = 0;
	int b1 = 0;
	//如果getchar获取了
	while (((ch = getchar()) != '0') && ch != EOF)
	{
		if (ch == 'A')
		{
			a1++;
		}
		else if (ch == 'B')
		{
			b1++;
		}
	}
	if (a1 > b1)
		printf("A");
	else if (a1 < b1)
		printf("B");
	else
		printf("E");
	return 0;
}
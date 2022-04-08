#define _CRT_SECURE_NO_WARNINGS 1
//输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出
//输入只有一行，出生日期，包括年月日，年月日之间的数字没有分隔符
//三行，第一行为出生年份，第二行为出生月份，第三行为出生日期。输出时如果月份或天数为1位数，需要在1
//位数前面补0。 
#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d %2d %2d", &year, &month, &day);
//	printf("year=%4d\nmonth=%02d\nday=%02d\n", year, month, day);
//	//%02d:当位数不够左边补
//	return 0;
//}
//不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算
//多组输入，每一行输入整数n（0 <= n < 31）。
//针对每组输入输出对应的2的n次方的结果
//输入 2 10 输出 2^2=4  2^10=1024

//题目关键 << 左移n位，1*2^n
//2-- 2<<n erro --  2*2^n
// 没有考虑 既然左移一位*2，为什么没想到1呢？
// <<n-->2^n
// 其次要求的是多组数据输入
//int main()
//{
//	int n = 0;
//	while((scanf("%d", &n))!=EOF)
////EOF 同样是使scanf函数结束的标志，跟getchar，相似
// //多组数据的输入
//	{
//		printf("%d",1<<n);
//	}
//
//	return 0;
//}

//输入两个整数，交换两组数据
//输入只有一行，按照格式输入两个整数，范围，中间用“,”分隔
//把两个整数按格式输出，中间用“,”分隔
//输入 a=1,b=2  输出 a=2,b=1
void Change(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("a=%d,b=%d", &a, &b);
	//第一种
	/*a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/
	Change(&a, &b);
	printf("a=%d,b=%d", a, b);
	return 0;
}

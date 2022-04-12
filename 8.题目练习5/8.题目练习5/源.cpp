#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，比如1461 可以拆分成
// （1和461）, （14和61）, （146和1), 如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
// 655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//题目 求出 5位数中的所有 Lily Number  10000-99999
// 1 * 4 + 2 * 3 + 3 * 2 + 4 * 1
// 
// 输出：一行，5位数中的所有 Lily Number，每两个数之间间隔一个空格。
int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int j = 10;
	int sum = 0;
	for (i = 14610; i < 100000; i++)//控制 数 1*146+61*14+461*1 
	{
		m = i;
		while (j<10001)//进行取位求和
		{              // 1461
			n =m % j;//取出位    1   						                
			sum += n * (m/j);  //n * m / j 
			j *= 10;

		}
		if (sum == i)//进行判断
		{
			printf("%d ", i);
		}
		n = 0;//重新进入while 需要将n重置
		sum = 0;
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 14610; i <= 99999; i++)
//	{
//		//判断i是否为lily number
//		int j = 10;
//		int sum = 0;
//		int tmp = i;
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (tmp % j) * (tmp / j);
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}
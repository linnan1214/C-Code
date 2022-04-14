#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件
//衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双
//11或双12使用），求KiKi最终所花的钱数

//输入描述：一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、
//第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。                  
//输出描述：一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）   
//输入 1000.0 11 11 1   999.8 12 12 0   66.6 11 11 1
//输出  650.00             799.84          0.00


//int main()
//{
//	double price = 0.0;
//	int month = 0;
//	int day = 0;
//	int y = 0;
//	double money = 0;
//	scanf("%lf %d %d %d", &price, &month, &day,&y);\
//	//double 类型的输入-scanf-%lf
//	//float  类型的输入-scanf-%f
//	if (y==1)
//	{
//		if ((month == 11) && (day == 11))
//		{
//			money = price * 0.7 - 50;
//		}
//		else if ((month == 12) && (day == 12))
//		{
//			money = price * 0.8 - 50;
//		}
//	}
//	else
//	{
//		if ((month == 11) && (day == 11))
//		{
//			money = price * 0.7 ;	//这	
//		}
//		else if ((month == 12) && (day == 12))  //仍然可以提出来 用一个变量代替 0.7 0.8 (cut)
//		{
//			money = price * 0.8 ;	//这
//		}
//	}
//    //money=price*cut-50*y; ---也就不用if 判断是否y==1了
//	if (money < 0)//只用写一次就好了，不用每一次的if和else if 中都判断一次--- 不然代码冗余
//	{
//		money = 0;
//	}
//	printf("%.2f", money);//同样也只用写一次就好了，不用每一次的if和else if 只用输出一次--- 不然代码冗余
//	return 0;
//}

//题目描述：期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出
//每组排在前五高的成绩。
//输入描述：两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用
//空格分隔。
//输出描述：一行，输出成绩最高的前五个，用空格分隔。
//输入：6   
//      99 45 78 67 72 88
//输出：99 88 78 72 67

int main()
{
	int m[40] = {0};
	int n = 0;
	int i = 0;
	int j = 0;
	int tmp = 0;//用于交换
	//输入
	scanf("%d", &n);//共有n个数
	for (i = 0; i < n; i++)
	{
		scanf("%d", &m[i]);
	}
	//排序
	for (i = 0; i < n; i++)//全部排列   6
	{
		for (j = 0; j < n - i-1;j++)//要比较n-2次  458176 548176 584176 584716 584761
		{       //5      6                           
			if (m[j] < m[j+1])
			{
				tmp = m[j+1];
				m[j+1] = m[j];
				m[j] = tmp;
			}		
		}
	}
	//输出
	for (i = 0; i < 5; i++)
	{
		printf("%d ", m[i]);
	}
	return 0;
}
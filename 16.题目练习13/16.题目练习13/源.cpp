#define _CRT_SECURE_NO_WARNINGS 1
//从键盘输入a, b, c的值，编程计算并输出一元二次方程ax2 + bx + c = 0的根，当a = 0时，输出“Not 
//quadratic equation”，当a ≠ 0时，根据△ = b2 - 4ac的三种情况计算并输出方程的根。
//多组输入，一行，包含三个浮点数a, b, c，以一个空格分隔，表示一元二次方程ax2 + bx + c = 0的系
//数。
//针对每组输入，输出一行，输出一元二次方程ax2 + bx + c = 0的根的情况。
//如果a = 0，输出“Not quadratic equation”；
//如果a ≠ 0，分三种情况：
//△ = 0，则两个实根相等，输出形式为：x1 = x2 = ...。 △ > 0，则两个实根不等，
//输出形式为：x1 = ...; x2 = ...，其中x1 <= x2。 △ < 0，则有两个虚根，
//则输出：x1 = 实部 - 虚部i; x2 = 实部 + 虚部i，即x1的虚部系数小于等于x2的虚部系数，
//实部为0时不可省略。实部 = -b / (2 * a),
//虚部 = sqrt(-△) / (2 * a)所有实数部分要求精确到小数
//点后2位，数字、符号之间没有空格。
//输入： 2.0 7.0 1.0
//输出：x1=-3.35;x2=-0.15

//求根公式 

#include<stdio.h>
#include<math.h>
//int main()
//{
//	double a = 0.0;	double b = 0.0;	double c = 0.0;	
//	double x1 = 0.0;double x2 = 0.0;double D = 0.0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//			printf("quadratic equation");
//		else
//		{
//			D = b*b - 4*a*c;
//			if (D > 0.0)//0.0
//			{
//				x1 = (-b + sqrt(D)) / 2;
//				x1 = (-b - sqrt(D)) / 2;
//					printf("x1=%.2lf x2=%.2lf\n", x1, x2);
//			}
//			else if (D ==0.0)
//			{
//				x1 = (-b + sqrt(D)) / 2;
//				printf("x1=x2=%.2lf\n", x1);
//			}
//			else
//			{
//				x1 = -b / (2 * a) - sqrt(-D) / (2 * a);
//				x2 = -b / (2 * a) + sqrt(-D) / (2 * a);
//				//printf("x1=%lfi x2=%lfi\n", x1, x2)    erro
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", -b / (2 * a) , sqrt(-D) / (2 * a),
//				 -b / (2 * a) ,sqrt(-D) / (2 * a) );
//			}
//		}
//	}
//	return 0;
//}

//获得月份天数
//KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。
// 多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
// 针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
//输入： 2008 2
//输出： 29
int main()
{
	int day = 0;int month = 0;int year = 0;int input = 0;
	
	while(scanf("%d %d", &year, &month)!=EOF)//取地址啊 老哥！
	{
		switch (month)
		{
		case 1:
			printf("31\n");
			break;
		case 2:
			if ((year % 400==0)|| ((year % 4 == 0) && (year % 100 != 0)))
			{
				printf("29\n");
				break;
			}
			else
			{
				printf("28\n");
				break;
			}

		case 3:
			printf("31\n");
			break;
		case 4:
			printf("30\n");
			break;
		case 5:
			printf("31\n");
			break;
		case 6:
			printf("30\n");
			break;
		case 7:
			printf("31\n");
			break;
		case 8:
			printf("31\n");
			break;
		case 9:
			printf("30\n");
			break;
		case 10:
			printf("31\n");
			break;
		case 11:
			printf("30\n");
			break;
		case 12:
			printf("31\n");
			break;
		default:
			break;
		}
	}
	return 0;
}


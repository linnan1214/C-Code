#define _CRT_SECURE_NO_WARNINGS 1
//�Ӽ�������a, b, c��ֵ����̼��㲢���һԪ���η���ax2 + bx + c = 0�ĸ�����a = 0ʱ�������Not 
//quadratic equation������a �� 0ʱ�����ݡ� = b2 - 4ac������������㲢������̵ĸ���
//�������룬һ�У���������������a, b, c����һ���ո�ָ�����ʾһԪ���η���ax2 + bx + c = 0��ϵ
//����
//���ÿ�����룬���һ�У����һԪ���η���ax2 + bx + c = 0�ĸ��������
//���a = 0�������Not quadratic equation����
//���a �� 0�������������
//�� = 0��������ʵ����ȣ������ʽΪ��x1 = x2 = ...�� �� > 0��������ʵ�����ȣ�
//�����ʽΪ��x1 = ...; x2 = ...������x1 <= x2�� �� < 0���������������
//�������x1 = ʵ�� - �鲿i; x2 = ʵ�� + �鲿i����x1���鲿ϵ��С�ڵ���x2���鲿ϵ����
//ʵ��Ϊ0ʱ����ʡ�ԡ�ʵ�� = -b / (2 * a),
//�鲿 = sqrt(-��) / (2 * a)����ʵ������Ҫ��ȷ��С��
//���2λ�����֡�����֮��û�пո�
//���룺 2.0 7.0 1.0
//�����x1=-3.35;x2=-0.15

//�����ʽ 

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

//����·�����
//KiKi����ĳ��ĳ���ж����죬��������ʵ�֡�������ݺ��·ݣ�������һ��������ж����졣
// �������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
// ���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
//���룺 2008 2
//����� 29
int main()
{
	int day = 0;int month = 0;int year = 0;int input = 0;
	
	while(scanf("%d %d", &year, &month)!=EOF)//ȡ��ַ�� �ϸ磡
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


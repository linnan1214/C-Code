#define _CRT_SECURE_NO_WARNINGS 1
//KiKiʵ��һ���򵥼�������ʵ���������ġ��Ӽ��˳������㣬�û��Ӽ���������ʽ��������1�����������
//2�������㲢������ʽ��ֵ����������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ������Invalid
//operation!�����������Ϊ�������㣬���� / ��ʱ�����������2����0.0���������Wrong!Division by zero!��
//�����������������룬һ�У�������1�����������2������������Ű������֣� + �� - �� * �� / ��
//������������ÿ�����룬���Ϊһ�С�
//          �����������������ž��Ϸ��������һ�����ʽ��������1�����������2=��������
//          ����С����������4λ�����ͷ���֮��û�пո�
//          ��������������Ų������ڣ� + �� - �� * �� / ����Χ�ڣ�
//          �����Invalid operation!�����������Ϊ�������㣬���� / ��ʱ��
//          ���������2����0.0���������Wrong!Division by zero!����
// ���룺
//1.0 + 3.0  
//1.0; 4.0
//44.0 / 0.0
// �����
//1.0000 + 3.0000 = 4.0000
//Invalid operation!
//Wrong!Division by zero!
#include<stdio.h>
int main()
{
	float a = 0.0;
	float b = 0.0;
	char c = 0;
	while (scanf("%f%c%f", &a, &c, &b) != EOF)
	{
		if (c == '+')
			printf("%.4f+%.4f=%.4f\n", a, b, a + b);
		else if (c == '-')
			printf("%.4f-%.4f=%.4f\n", a, b, a - b);
		else if (c == '/')
		{
			if (b == 0)
				printf("Invalid operation!\n");
			else
				printf("%.4f/%.4f=%.4f\n", a, b, a / b);
		}
		else if (c == '*')
			printf("%.4f*%.4f=%.4f\n", a, b, a * b);
		else
			printf("Wrong!Division by zero!\n");
	}
	return 0;
}
//�ڶ��֣�
//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &n1, &op, &n2) != EOF)
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf", n1, n2, n1 * n2);
//			break;
//		case '/':
//			if (n2 == 0.0)
//				printf("Wrong!Division by zero!\n");
//			else
//				printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
//			break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//		}
//	}
//	return 0;
//}
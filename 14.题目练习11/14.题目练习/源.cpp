#define _CRT_SECURE_NO_WARNINGS 1
//�ж��������ǵȱ������λ��ǵ��������λ�����ͨ������
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while(scanf("%d %d %d", &a, &b, &c)!=EOF);
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//				printf("�ȱ�������");
//			else if ((a = b && a != c) || a == c && a != b || b == c && b != a)
//				printf("����������");
//			else
//				printf("��ͨ������");
//		}
//		else
//			printf("����������");
//	}
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		//������������������
		if (a + b > c && b + c > a && c + a > b)
		{
			if (a == b && b == c)
				printf("Equilateral triangle!\n");
			else if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
				printf("Isosceles triangle!\n");
			else
				printf("Ordinary triangle!\n");
		}
		else
			printf("Not a triangle!\n");
	}
	return 0;
}
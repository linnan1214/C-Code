#define _CRT_SECURE_NO_WARNINGS 1
//IBM=mg(kg)/(h(m)*h(m))
// <18.5 ƫ��
// >=18.5 &&<=23.9 ����
// >23.9����
// >27.5����
//
#include<stdio.h>
int main()
{
	float m = 0.0;
	float h = 0.0;
	float M = 0.0;
	while (scanf("%f %f", &m, &h) != EOF)
	{
		M = m / (h * h / 10000);// weight / (hight * hight / 100 / 100);
		if (M < 18.5)
		{
			printf("ƫ��\n");
		}
		else if (M >= 18.5 && M <= 23.9)
		{
			printf("����\n");
		}
		else if (M > 23.9 && M <= 27.5)
		{
			printf("����\n");
		}
		else
		{
			printf("����\n");
		}
	}
	return 0;
}
//int main()
//{
//	float weight = 0.0;
//	float hight = 0.0;
//	while (scanf("%f %f", &weight, &hight) != EOF)
//	{
//		float bmi = weight / (hight * hight / 100 / 100);
//		if (bmi < 18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (bmi >= 18.5 && bmi <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (bmi > 23.9 && bmi <= 27.9)
//		{
//			printf("Overweight\n");
//		}
//		else {
//			printf("Obese\n");
//		}
//	}
//	return 0;
//}
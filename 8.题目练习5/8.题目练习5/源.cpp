#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�����1461 ���Բ�ֳ�
// ��1��461��, ��14��61��, ��146��1), ������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
// 655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��Ŀ ��� 5λ���е����� Lily Number  10000-99999
// 1 * 4 + 2 * 3 + 3 * 2 + 4 * 1
// 
// �����һ�У�5λ���е����� Lily Number��ÿ������֮����һ���ո�
int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int j = 10;
	int sum = 0;
	for (i = 14610; i < 100000; i++)//���� �� 1*146+61*14+461*1 
	{
		m = i;
		while (j<10001)//����ȡλ���
		{              // 1461
			n =m % j;//ȡ��λ    1   						                
			sum += n * (m/j);  //n * m / j 
			j *= 10;

		}
		if (sum == i)//�����ж�
		{
			printf("%d ", i);
		}
		n = 0;//���½���while ��Ҫ��n����
		sum = 0;
	}
	return 0;
}

//int main()
//{
//	int i = 0;
//	for (i = 14610; i <= 99999; i++)
//	{
//		//�ж�i�Ƿ�Ϊlily number
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
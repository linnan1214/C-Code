#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ��
//����%md������Ϊm��10����������m��ʾ����Ŀ��
// ʮ�������� 15��ȵ�10�������
//int main()
//{
//	int a = 0xABCDEF;
//	printf("%15d\n", a);
//	return 0;
//}
//�ڶ���
//printf�ķ���ֵ ���ش�ӡ�ַ��ĸ���
//���printf(��Hello world!��)�ķ���ֵ��
//int main()
//{
//	printf("%d",printf("Hellow world\n"));//--13
//	return 0;
//}
//������
//�Ӽ�����������һ���ַ����ж��Ƿ�Ϊ��ĸ
//int main()
//{
//	int ch = 0;
//		while((ch = getchar()) != EOF)
//	{
//			if ((ch >= 65 && ch <= 90)||(ch >= 97 && ch <= 122))
//			{
//				printf("YSE");
//			}
//			else
//			{
//				printf("NO");
//			}
//			getchar();
//	}
//	return 0;
//}
// ������
//����һ���ַ�����������һ�������ν�������
//    1
//   1 1
//  1 1 1
// 1 1 1 1
//1 1 1 1 1
int main()
{
	int i = 0;
	char a = 0;
	scanf("%ch", &a);
	//������
	for (i = 0;i<5; i++)
	{
		int j = 0;
		//�������
		for (j = 0; j <5-i-1; j++)//
			//for (j = 0; j <5; j++)
		{
			printf(" ");
		}
		for (j = 0; j <=i ; j++)//
		{
			printf("%c ", a);
		}
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�����������������룬ÿ�������������������ʾ�ķ�����0~100�����ÿո�ָ���
//������������ÿ�����룬���Ϊһ�У������������е���߷֡�
//���룺  94 98 99
//        100 88 60
// ����� 99
//        100
//
// 1.��������
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF)
//	{
//		if (a >= b && a >= c)
//			printf("%d", a);
//		else if (b >= a && b >= c)
//			printf("%d", b);
//		else
//			printf("%d", c);	
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//		int score[3] = { 0 };
//	while (scanf("%d %d %d", &score[0], &score[1], &score[2]) != EOF)
//	{
//		int max = 0;//ÿһ����ԣ�max���ָ���0
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			if (score[i] > max)
//				max = score[i];
//		}
//		printf("%d\n", max);
//	}
//
//	return 0;
//}

//KiKi��ʼѧϰӢ����ĸ��BoBo��ʦ���������������ĸA(a), E(e), I(i), O(o),U(u)��ΪԪ��������������
//ĸ��Ϊ�������������д�����ж��������ĸ��Ԫ����Vowel�����Ǹ�����Consonant����
//�����������������룬ÿ������һ����ĸ
//������������ÿ�����룬���Ϊһ�У����������ĸ��Ԫ����������Сд���������Vowel�������������ĸ�Ƿ�Ԫ����
// �����Consonant���� 
// ���룺A
//       b
// �����Vowel
//       Consonant

//1.��������
//int main()
//{
//	char a = 0;
//	while ((scanf("%c",&a) != EOF))//
//	{
//		if (a == 'A' || a == 'a' || a == 'E' || a == 'e' ||
//			a == 'I' || a == 'i' || a == 'O' || a == 'o'
//			|| a == 'U' || a == 'u')
//			printf("Vowel");
//		else
//			printf(" Consonant");
//		getchar();
//	}
//	return 0;
//}

////����1
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//		getchar();//ȥ��ÿ���ַ����\n
//	}
//	return 0;
//}

//����2
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//��%c��ǰ��дһ���ո��������ǰ�����еĿհ��ַ���Ȼ���ȡһ���ַ�
//	while (scanf(" %c", &ch) != EOF)
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}
\
//����3
//int main()
//{
//	char ch = 0;
//	char arr[] = "AEIOUaeiou";
//	//��%c�ĺ�߷���һ��'\n'����ʵ������ʱ��ͻ����������\n�ַ�
//	//����Ϊ�´����¿հ��ַ�������
//	while (scanf("%c\n", &ch) != EOF)
//	{
//			int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (ch == arr[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0;
//	a = getchar();
//	printf("%d %c", a,a);
//	return 0;
//}
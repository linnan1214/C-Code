#define _CRT_SECURE_NO_WARNINGS 1
//���
//      *   6 3*2
//    * *   4 2*2
//  * * *   2 1*2
//* * * *   0 0*2
#include <stdio.h>
//int main() 
//{
//    int a;
//    while (scanf("%d", &a) != EOF) 
//    {
//        int i, k;
//        for (k = 0; k < a; k++)
//        {
//            for (i = 0; i < (a - k - 1); i++) 
//            {
//                printf("  ");
//            }
//            for (i = 0; i <= k; i++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
//�������룬һ��������2~20������ʾ��ת�������ߵĳ��ȣ�����*����������Ҳ��ʾ���������
//���ÿ�����룬����á�* ����ɵĽ�������ÿ����* ��������һ���ո�
//5
//* * * * *
// * * * *
//  * * *
//   * *
//    *
//4
//* * * * 4  0
// * * *  3  1
//  * *   2  2
//   *    1  3

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0;j<n-i;j++)
			{
				printf("* ");
			}
			printf("\n");
			for (j = 0; j <= i; j++)
			{
				printf(" ");
			}
		}
	}
	return 0;
}
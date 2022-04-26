#define _CRT_SECURE_NO_WARNINGS 1
//输出
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
//多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数。
//针对每行输入，输出用“* ”组成的金字塔，每个“* ”后面有一个空格。
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
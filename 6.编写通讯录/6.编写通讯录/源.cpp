#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void menue()
{
	printf("********************************\n");
	printf("****0.Exit    1.Add  ***********\n");
	printf("****2.Delete  3.Show ***********\n");
	printf("****4.Search  5.Sort ***********\n");
	printf("****6.Modify         ***********\n");
	printf("********************************\n");
}
int main()
{
	int input = 0;
	struct Contact per;//创建通讯录，含1000数据，size
	//初始化通讯录
	InContact(&per);
	do
	{
		menue();
		scanf("%d", &input);
		switch (input)
		{
		case Add:
			AddContact(&per);
			break;
		case Delete:
			DeleteContact(&per);
			break;
		case Show:
			ShowContact(&per);
			break;
		case Search:

			SearchContact(&per);
			break;
		/*case Sort:
			SoContact(&per);
			break;*/
		case Modify:
			ModifyContact(&per);
			break;
		case Exit:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
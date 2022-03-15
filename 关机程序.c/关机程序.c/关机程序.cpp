#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	char arr[20]={0};
	system("shutdown -s -t 432000");//system 执行系统命令，
again:
	printf("请注意你的电脑将在120分钟后关机，请输入我是猪，阻止关机，\n请入输入\n");
	scanf("%s",arr);
	if(strcmp(arr,"我是猪")==0)
	{
		system("shutdown -a");
	   printf("你成功解开\n");
	}
	else
		goto again;

	return 0;
}

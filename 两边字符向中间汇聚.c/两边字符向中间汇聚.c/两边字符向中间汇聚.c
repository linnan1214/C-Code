#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="I love you 陈 嘉 琪 !!!!!";
	char arr2[]="*************************";
	//要计算的是下标
	int left=0;//左下标
	//int right=sizeof(arr1)/sizeof(arr1[0]);//计算的时候包括系统自动添加的'\n'
	int right=strlen(arr1)-1;    //计算的时候不包括系统增加的'/n'，-1是计算下标
	while(left<=right)
		//相同类型的数据，可赋值，如两个同类型的字符串，同类型的数字...所以不用引用string.h中的函数
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
		printf("%s\n",arr2);
		Sleep(1000);//引用stdlib.h的头文件，休息1秒输出一次
		system("cls");//引用window.h头文件，system:执行系统命令,()内要用"",cls:>清空屏幕
	}
	printf("%s\n",arr2);
	return 0;
}


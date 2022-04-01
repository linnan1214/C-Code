#define _CRT_SECURE_NO_WARNINGS 1
//编写一个reverse_string(char* string)函数，实现字符串逆序排列
//不是逆序打印，是将数组内容逆序排列
//要求：不能使用c函数库中的字符串操作函数（strlen）
//abcdef-->交换a,f-->fbce\0 -->交换bce（继续调用函数）-->在放'a'【一直重复这个动作】
//abcdefg
//递归:每次递归结束要使不满足条件
#include<stdio.h>
#include<string.h>
//计数法代替strlen函数
int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		p++;
		count++;
	}
	return count;
}
//用递归的方法
void reverse_string(char* arr)//void reverse_string(char arr[])是等价的
	//abcdefg
{
	int right = my_strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[right - 1];
	arr[right - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[right - 1] = tmp;
}
//不用递归的方法
//void reverse_string(char arr[])
//{
//	int i=0;
//	int left=0;
//	int right=my_strlen(arr)-1;//(6)	
//	while(right>left)
//	{
//		char temp=arr[left];	
//		arr[left]=arr[right];//'abcdefg'
//		arr[right]=temp;	
//		right--;	
//		left++;
//	}
//}
int main()
{
	char arr[] = "abcdef";//不用这样{"abcdfe"} 1234567
	int i = 0;
	reverse_string(arr);
	printf("%s\n", arr);//字符串打印
	//int sz=strlen(arr);//(7)
	//for(i=0;i<sz;i++)  单字符打印
	//{	
	//	printf("%c",arr[i]);
	//}
	return 0;
}
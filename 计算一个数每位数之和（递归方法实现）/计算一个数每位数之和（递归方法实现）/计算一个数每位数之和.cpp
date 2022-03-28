#include<stdio.h>
//写一个递归函数DigitSum输入一个非负整数，返回组成他的数字之和
//E.g 调用DigitSum（1729），应该返回 1 + 7 + 2 + 9它的和是19
//1729%10  9 1729/10 172
//172%10   2 172/10  17
//17%10    7 17/10   1

int DigitSum(int n)
//递归函数本身就类型一种循环，条件的限定用if而不是循环结构
{
	if(n>9)
	{		 
		 return n%10+DigitSum(n/10);
	}
	else
	{
		return n;
	}

}
int main()
{
	int n=0;
	scanf("%d",&n);
	int ret=DigitSum(n);
	printf("%d",ret);
}
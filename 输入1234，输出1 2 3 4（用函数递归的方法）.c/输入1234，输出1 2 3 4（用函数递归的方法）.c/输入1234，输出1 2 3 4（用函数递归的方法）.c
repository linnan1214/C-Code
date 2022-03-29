#include<stdio.h>
//输入1234 输出1 2 3 4 用递归发

void fun(int n)
{
	if(n>9)
	{
		fun(n/10);
	}
	printf("%d ",n%10);
}

int main()
{ 
	int n,x;
	scanf("%d",&n);
	fun(n);
	return 0;
}
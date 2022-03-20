//编程实现两个int(32位)整数m和n二进制表达中，有多少个不同的位(用函数)
//思路:'^'(按位异或）--相异时为1，相同时为0.用 ^ 求出（m^n）中有多少个1
//【(&按位与，||(按位或)】
//111(7)&110(6)-->110&101-->100&011-->000
//
//每n=n&n-1就去掉二进制中的一个1
//011^001-->1
#include<stdio.h>
int get(int a)
{
	int count=0;
	while(a)
	{
		a=a&a-1;
		count++;
	}
	return count;
}
int Get(int n,int m)
{
	int ret=0;
	return get(n^m);
}
int main()
{
	int m=0;
	int n=0;
	int ret=0;
	scanf("%d %d",&n,&m);
	ret=Get(n,m);
	printf("%d",ret);
}
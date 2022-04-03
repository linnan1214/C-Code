#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Sto()
{
	int b = 1;
	char* p = (char*)&b;
	return *p;
}
int main()
{
	//内存中 00 00 00 00 两个数字一起才是一个字节 
	//内存  低地址-->高地址
	//存放 0xa=1:00 00 00 01  大端存储 00 00 00 01  小端存储 01 00 00 00
	//如果我们可以拿到第一个字节并判断是否等于1就可以知道它的存储方式
	// 指针的类型有两个作用：
	// 1.指针+-整数，跳过的长度是由它的类型决定，char--1 int--4
	// 2.指针类型决定了解引用可以访问几个字节，char--1 int--4
	//要拿到一个字节，我们可以强制类型转换位char类型（其他小为1个字节），像int是4个字节所以不可以
	int ret = Sto();
	if (ret == 1)
	{
		printf("小端存储\n");
	}
	else
	{
		printf("大端存储\n");
	}
	return 0;
}
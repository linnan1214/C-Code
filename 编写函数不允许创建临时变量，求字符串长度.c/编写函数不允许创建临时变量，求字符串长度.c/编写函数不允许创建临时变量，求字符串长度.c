#include<stdio.h>
//编写函数不允许创建临时变量，求字符串长度

int fun(char* c)
{
	if(*c!='\0')
	{ 
		*c++;            //或者 return 1+fun(c+1);
		return 1+fun(c);//永远先调用函数，再进去函数，直到返回的时候才能完成一次函数
	}   
	//一开始未考虑 else 的情况（\0）
	else 
		return 0;
}
//char c[]="abcd"
//1+bcd\0
//1+1+cd\0
//1+1+1+d\0
//1+1+1+1+\0
//1+1+1+1+0
int main()
{
	char c[]="abcd";
	
	
	printf("%d ",fun(c));

	return 0;
}
#include<stdio.h>

//写一个函数，每调用一次，就将num的值+1


int  fun(int* num)
{
	(*num)++;//  (*num)++：指针num所指向的变量的数据自增；*num++：指针向下移动一个单位
}

int main()
{
	
	int num=0;
	
	fun(&num);
		/*x++;*/
	
	printf("%d\n",num);
	return 0;

}
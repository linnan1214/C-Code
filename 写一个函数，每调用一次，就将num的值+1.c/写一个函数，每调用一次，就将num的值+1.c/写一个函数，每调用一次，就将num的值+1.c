#include<stdio.h>

//дһ��������ÿ����һ�Σ��ͽ�num��ֵ+1


int  fun(int* num)
{
	(*num)++;//  (*num)++��ָ��num��ָ��ı���������������*num++��ָ�������ƶ�һ����λ
}

int main()
{
	
	int num=0;
	
	fun(&num);
		/*x++;*/
	
	printf("%d\n",num);
	return 0;

}
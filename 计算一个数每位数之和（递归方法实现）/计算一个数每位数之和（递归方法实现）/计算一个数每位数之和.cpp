#include<stdio.h>
//дһ���ݹ麯��DigitSum����һ���Ǹ����������������������֮��
//E.g ����DigitSum��1729����Ӧ�÷��� 1 + 7 + 2 + 9���ĺ���19
//1729%10  9 1729/10 172
//172%10   2 172/10  17
//17%10    7 17/10   1

int DigitSum(int n)
//�ݹ麯�����������һ��ѭ�����������޶���if������ѭ���ṹ
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
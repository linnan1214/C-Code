//���ʵ������int(32λ)����m��n�����Ʊ���У��ж��ٸ���ͬ��λ(�ú���)
//˼·:'^'(��λ���--����ʱΪ1����ͬʱΪ0.�� ^ �����m^n�����ж��ٸ�1
//��(&��λ�룬||(��λ��)��
//111(7)&110(6)-->110&101-->100&011-->000
//
//ÿn=n&n-1��ȥ���������е�һ��1
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
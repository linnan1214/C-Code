#define _CRT_SECURE_NO_WARNINGS 1
//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ��
//����Ϊ�糤.
//һ�У��ַ����У�����A��B���������ַ�0������
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
#include<stdio.h>
int main()
{
	int a = 0;
	int count = 0;
	while (((a = getchar()) != '0') && a != EOF)
		//�ڶ����ǲ�����getchar()��ȥ���գ���Ϊ��һ�ξʹӻ�������ȡһ���ַ�
	{
		if (a == 'A')
			count++;
		else if (a = 'B')
			count--;
	}
	if (count > 0)
		printf("A");
	else if (count < 0)
		printf("B");
	else
		printf("E");
	return 0;
}

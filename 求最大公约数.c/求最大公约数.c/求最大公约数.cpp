#include<stdio.h>
int main()
{   
	/*int b=0;int c=0;int r=0;
	printf("������������\n");
	scanf("%d%d",&c,&b);
	while(r)
	{
		r=c%b;
		c=b;
		b=r;
	}
	printf("���Լ��Ϊ��%d",b);*/
	int b=0;int c=0;int r=0;
	printf("�����������������ǵ����Լ��\n");
	scanf("%d %d",&b,&c);
	while(r)
	{
		r=b%c;
		b=c;
		c=r;
	}
	printf("���Լ����%d\n",c);
	return 0;
}

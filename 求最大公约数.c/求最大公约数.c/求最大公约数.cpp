#include<stdio.h>
int main()
{   
	/*int b=0;int c=0;int r=0;
	printf("请输入两个数\n");
	scanf("%d%d",&c,&b);
	while(r)
	{
		r=c%b;
		c=b;
		b=r;
	}
	printf("最大公约数为：%d",b);*/
	int b=0;int c=0;int r=0;
	printf("输入两个数，求他们的最大公约数\n");
	scanf("%d %d",&b,&c);
	while(r)
	{
		r=b%c;
		b=c;
		c=r;
	}
	printf("最大公约数：%d\n",c);
	return 0;
}

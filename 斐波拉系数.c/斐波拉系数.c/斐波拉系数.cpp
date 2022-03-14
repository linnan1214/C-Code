#include<stdio.h>
// 1 1 2 3 5 8 13 21 34 55...
//int fun(int n)
//{
//	int a=1;
//    int c=1;
//	int b=1;
//	while(n>2)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		n--;
//	}
//	return c;
//}
//1 1 2 3 5 8 13 21 34 55...
int fun(int n)
{
	if(n>2)
	    return fun(n-1)+fun(n-2);
	else
		return 1;
}
int main()
{
	int x=0;
	int n=0;
	scanf("%d",&n);
	x=fun(n);
	printf("%d\n",x);
}
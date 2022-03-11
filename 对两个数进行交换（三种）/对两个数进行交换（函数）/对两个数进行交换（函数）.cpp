#include<stdio.h>
//void compare(int* a,int* b)
//{
//	int temp=0;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d\n",a,b);
//	compare(&a,&b);
//	printf("a=%d b=%d\n",a,b);
//	return 0;
//}

//¼Ó¼õ·¨
//int main()
//{
//	int a=3;
//	int b=4;
//	printf("Before a=%d ,b=%d\n",a,b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("After  a=%d ,b=%d\n",a,b);

//^·¨
//(a^b)^b=a
//(a^b)^a=b
int main()
{
	int a=3;
	int b=4;
	printf("Before a=%d ,b=%d\n",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After  a=%d ,b=%d\n",a,b);
}
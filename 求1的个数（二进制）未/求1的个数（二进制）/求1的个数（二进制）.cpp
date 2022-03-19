#include<stdio.h>
int main()
{
	int n=10;//0000110-->000001
	printf("%d",n>>2);
	
	
}
//第一种，存在缺陷
//int main()
//{
//	int i;
//	int count=0;
//	scanf("%d",&i);
//	while(i)
//	{
//		if(1==i%2)
//	    count++;
//		i=i/2;
//	}
//	printf("%d",count);
//  return 0;
//}
//可改进
//13
//1101
//13%2->1;13/2->110(6)...重复
//1231
//1231%10->1,1231/10->123..重复
//int count_num(unsigned int a)
//{
//	int count=0;
//	while(a)
//	{
//		if(a%2==1)
//		{
//			count++;
//		}
//		a=a/2;
//	}
//	return count;
//}
//int main()
//{
//	int a=0;
//	scanf("%d",&a);
//	int count=count_num(a);
//	printf("%d ",count);
//}




//***第二种
//int main()
//{
	//111111111111111111111111
	//000000000000000000000001
//	int i,j;
//	int count=0;
//	i=1;
//	scanf("%d",&j);
//	while(i++<=32)
//	{
//		if(1==((j>>i)&1))//注意两对括号，运算有优先级和先后顺序的
//		{			
//			count++;
//		}
//	}
//	printf("%d",count);
//  return 0;
//}

//***第三种
//n=n&(n-1)
//每执行一次，就去掉二进制的一个1；
//int main()
//{
//	int i;
//	int count=0;
//	scanf("%d",&i);
//	while(i)
//	{
//		count++;
//		i=i&(i-1);
//	}
//	printf("%d",count);
//
//}
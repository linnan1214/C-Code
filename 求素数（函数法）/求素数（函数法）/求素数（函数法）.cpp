#include<stdio.h>
//是素数返回1，不是素数返回0
int is_prime(int n)
{
	   int j;
	   for(j=2;j<n;j++)
		{
			  if(n%j==0)
				return 0;//①		
			  //break;   return语句更强大，直接返回主函数
		}//到此处的时候只有一种情况，就是i==j的时候跳出循环，所以都不用判断了，直接return 1;
		//if(n==j)
		//{
			return 1;
		//}
}
int main()
{  
	int i=0;
	for(i=2;i<=100;i++)
	{
	    if(is_prime(i)==1)
		printf("%d ",i);
	}
	return 0;
}
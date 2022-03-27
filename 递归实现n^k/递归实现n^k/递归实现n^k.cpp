#include<stdio.h>
//n^k=n*n^k-1
//n^k-1=n*n^k-2
//...n*n^1...n*n^0


//注意  类型要一致 输入int型就要int型输出
double Pf(int n,int k)
{
	if(k>0)
	{
		return n*Pf(n,k-1);
	}
	else if(k==0)//==  和 = 这得注意呀
	{
		return 1;
	}
	else//这里是除法要注意，不是整数
	{
		return (1.0/(Pf(n,-k)));
	}

}
int main()
{
	int n=0;
	int k=0;
	scanf("%d %d",&n,&k);
	double  ret=Pf(n,k);
	printf("ret=%lf \n",ret);
	return 0;
}
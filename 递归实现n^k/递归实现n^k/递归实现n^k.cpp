#include<stdio.h>
//n^k=n*n^k-1
//n^k-1=n*n^k-2
//...n*n^1...n*n^0


//ע��  ����Ҫһ�� ����int�;�Ҫint�����
double Pf(int n,int k)
{
	if(k>0)
	{
		return n*Pf(n,k-1);
	}
	else if(k==0)//==  �� = ���ע��ѽ
	{
		return 1;
	}
	else//�����ǳ���Ҫע�⣬��������
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
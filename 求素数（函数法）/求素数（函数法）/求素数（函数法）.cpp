#include<stdio.h>
//����������1��������������0
int is_prime(int n)
{
	   int j;
	   for(j=2;j<n;j++)
		{
			  if(n%j==0)
				return 0;//��		
			  //break;   return����ǿ��ֱ�ӷ���������
		}//���˴���ʱ��ֻ��һ�����������i==j��ʱ������ѭ�������Զ������ж��ˣ�ֱ��return 1;
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
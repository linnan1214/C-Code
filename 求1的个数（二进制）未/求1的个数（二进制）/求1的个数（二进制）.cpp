#include<stdio.h>
int main()
{
	int n=10;//0000110-->000001
	printf("%d",n>>2);
	
	
}
//��һ�֣�����ȱ��
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
//�ɸĽ�
//13
//1101
//13%2->1;13/2->110(6)...�ظ�
//1231
//1231%10->1,1231/10->123..�ظ�
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




//***�ڶ���
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
//		if(1==((j>>i)&1))//ע���������ţ����������ȼ����Ⱥ�˳���
//		{			
//			count++;
//		}
//	}
//	printf("%d",count);
//  return 0;
//}

//***������
//n=n&(n-1)
//ÿִ��һ�Σ���ȥ�������Ƶ�һ��1��
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
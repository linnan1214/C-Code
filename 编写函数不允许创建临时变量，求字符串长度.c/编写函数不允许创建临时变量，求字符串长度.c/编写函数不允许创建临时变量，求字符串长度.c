#include<stdio.h>
//��д��������������ʱ���������ַ�������

int fun(char* c)
{
	if(*c!='\0')
	{ 
		*c++;            //���� return 1+fun(c+1);
		return 1+fun(c);//��Զ�ȵ��ú������ٽ�ȥ������ֱ�����ص�ʱ��������һ�κ���
	}   
	//һ��ʼδ���� else �������\0��
	else 
		return 0;
}
//char c[]="abcd"
//1+bcd\0
//1+1+cd\0
//1+1+1+d\0
//1+1+1+1+\0
//1+1+1+1+0
int main()
{
	char c[]="abcd";
	
	
	printf("%d ",fun(c));

	return 0;
}
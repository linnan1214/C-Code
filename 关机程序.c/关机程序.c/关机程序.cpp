#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	char arr[20]={0};
	system("shutdown -s -t 432000");//system ִ��ϵͳ���
again:
	printf("��ע����ĵ��Խ���120���Ӻ�ػ�����������������ֹ�ػ���\n��������\n");
	scanf("%s",arr);
	if(strcmp(arr,"������")==0)
	{
		system("shutdown -a");
	   printf("��ɹ��⿪\n");
	}
	else
		goto again;

	return 0;
}

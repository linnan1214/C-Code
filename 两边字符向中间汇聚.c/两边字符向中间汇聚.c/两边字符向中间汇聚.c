#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]="I love you �� �� �� !!!!!";
	char arr2[]="*************************";
	//Ҫ��������±�
	int left=0;//���±�
	//int right=sizeof(arr1)/sizeof(arr1[0]);//�����ʱ�����ϵͳ�Զ���ӵ�'\n'
	int right=strlen(arr1)-1;    //�����ʱ�򲻰���ϵͳ���ӵ�'/n'��-1�Ǽ����±�
	while(left<=right)
		//��ͬ���͵����ݣ��ɸ�ֵ��������ͬ���͵��ַ�����ͬ���͵�����...���Բ�������string.h�еĺ���
	{
		arr2[left]=arr1[left];
		arr2[right]=arr1[right];
		left++;
		right--;
		printf("%s\n",arr2);
		Sleep(1000);//����stdlib.h��ͷ�ļ�����Ϣ1�����һ��
		system("cls");//����window.hͷ�ļ���system:ִ��ϵͳ����,()��Ҫ��"",cls:>�����Ļ
	}
	printf("%s\n",arr2);
	return 0;
}


#define _CRT_SECURE_NO_WARNINGS 1
//��дһ��reverse_string(char* string)������ʵ���ַ�����������
//���������ӡ���ǽ�����������������
//Ҫ�󣺲���ʹ��c�������е��ַ�������������strlen��
//abcdef-->����a,f-->fbce\0 -->����bce���������ú�����-->�ڷ�'a'��һֱ�ظ����������
//abcdefg
//�ݹ�:ÿ�εݹ����Ҫʹ����������
#include<stdio.h>
#include<string.h>
//����������strlen����
int my_strlen(char* p)
{
	int count = 0;
	while (*p != '\0')
	{
		p++;
		count++;
	}
	return count;
}
//�õݹ�ķ���
void reverse_string(char* arr)//void reverse_string(char arr[])�ǵȼ۵�
	//abcdefg
{
	int right = my_strlen(arr);
	char tmp = arr[0];
	arr[0] = arr[right - 1];
	arr[right - 1] = '\0';
	if (my_strlen(arr + 1) > 1)
		reverse_string(arr + 1);
	arr[right - 1] = tmp;
}
//���õݹ�ķ���
//void reverse_string(char arr[])
//{
//	int i=0;
//	int left=0;
//	int right=my_strlen(arr)-1;//(6)	
//	while(right>left)
//	{
//		char temp=arr[left];	
//		arr[left]=arr[right];//'abcdefg'
//		arr[right]=temp;	
//		right--;	
//		left++;
//	}
//}
int main()
{
	char arr[] = "abcdef";//��������{"abcdfe"} 1234567
	int i = 0;
	reverse_string(arr);
	printf("%s\n", arr);//�ַ�����ӡ
	//int sz=strlen(arr);//(7)
	//for(i=0;i<sz;i++)  ���ַ���ӡ
	//{	
	//	printf("%c",arr[i]);
	//}
	return 0;
}
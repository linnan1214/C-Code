#include<stdio.h>
//写一个打印函数打印数组内容，不使用数组下标使用指针，arr是一个整形指针
//void print(int arr[],int sz)
//{
//	int i=0;
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}
void print(int* p,int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",*(p+i));
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
	print(arr,sz);

}
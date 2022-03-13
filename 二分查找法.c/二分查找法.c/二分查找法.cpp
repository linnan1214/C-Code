#include<stdio.h>
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=71;
//	int left=0;//左下标
//	int right=sizeof(arr)/sizeof(arr[0])-1;  //右下标=元素个数-1
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//	    if(arr[mid]>k)
//		        right=mid-1;
//	    else if(arr[mid]<k)
//		       left=mid+1;
//	    else
//	   {
//		  printf("找到了，下标为%d",mid);
//		  break;
//        }
//	}
//	if(left>right)
//	{
//		printf("不好意思，找不到\n");
//	}
//	return 0;
//}

int Compare(int arr1[10],int sz,int k)
{	
	
	int left=0;
	int right=sz-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr1[mid]<k)
		    left=mid+1;
		else if(arr1[mid]>k)
			right=mid-1;
		else 
		    return mid;
	}
	if(left>right)
		return -1;
}
int main()
{
	int arr1[10]={1,2,3,4,5,6,7,8,9,10};
	int sz;
	int k=3;
	sz=sizeof(arr1)/sizeof(arr1[0]);
	printf("运用二分查找%d\n",k);
	int ret=Compare(arr1,sz,k);
	if(ret>=0)
		printf("找到了,下标为%d\n",ret);
	else
		printf("找不到\n");
}
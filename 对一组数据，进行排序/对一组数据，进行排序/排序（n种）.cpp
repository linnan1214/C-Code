#include<stdio.h>
// 第一种
//int main()
//{
//	//升序排
//	int i=0;
//	int j=0;
//	int flag=0;
//	int c[10]={10,1,2,3,4,5,6,7,8,9};
//	int sz=sizeof(c)/sizeof(c[0]);//计算数组的元素不包括\0  strlen计算字符串的元素包括\0
//	//printf("%d",sz);
//	int temp=0;
//	int a=0;
//	for(i=0;i<sz-1;i++)//轮次 9次
//	{
//		flag=1;//假设本轮有序
//		for(j=0;j<sz-i-1;j++)//每轮比较的次数
//		{
//			//第x轮次      1 2 3 4 5 6 7 8 9(共9轮)    
//			//每轮比较次数 9 8 7 6 5 4 3 2 1
//			if(c[j]>c[j+1]) 
//			{
//				temp=c[j+1];
//				c[j+1]=c[j];
//				c[j]=temp;
//				flag=0;//本轮排序不完全有序
//			}				
//		}
//		if(1==flag)//如果有序就直接跳出本轮循环
//			{
//				printf("a=%d\n",a++);
//				break;
//			}
//	}
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",c[i]);
//	}
//	
//}
///////////////////////////////////////////////////////
//升序排列
void Order(int arr[],int sz)
{
	int i=0;
	int j=0;
	int temp;
	while(1)
	{
		for(i=0;i<sz-1;i++)
	    {		
		  for(j=0;j<sz-1-i;j++)
		    {			
			   if(arr[j]>arr[j+1])
			   {
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			   } 
	       	}  
		}
		break;
	}
	for(i=0;i<sz;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int arr[10]={10,9,8,7,6,5,4,3,2,1};
	int sz=sizeof(arr)/sizeof(arr[0]);
	Order(arr,sz);
	return 0;
}


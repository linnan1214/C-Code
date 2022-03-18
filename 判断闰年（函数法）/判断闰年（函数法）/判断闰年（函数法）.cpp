#include<stdio.h>
//#include"compare.h"
int compare(int x)
{
	if((x%4==0&&x%100!=0)||(x%400==0))
		return x;
	else
		return 0;
}

int main()
{
	int i;
	

	for(i=1000;i<=2000;i++)
	{
		if(compare(i))
		printf("%d ",i);
		
	}
	
	return 0;
}
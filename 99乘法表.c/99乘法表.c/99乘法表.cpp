#include<stdio.h>
#include<string.h>
int main()
{
	char arr[]={"abcdef"};
	int a=strlen(arr);
	int b=sizeof(arr)/sizeof(arr[0]);
	printf("%d %d\n",a,b);
	/*int i=0;
	int j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-2d ",i,j,i*j);
		}
		printf("\n");
	}*/
	return 0;
}
//1*1
//2*1 2*2
//3*1 3*2 3*3
//4*1 4*2 4*3 4*4
//...
//9*1 9*2 9*3 9*4 9*5 9*5 9*6 9*7 9*8 9*9
#include<stdio.h>

//n*(n-1)*
int fun(int n)
{
	if(n>1)
	    return n*fun(n-1);
	else
		return 1;
}
int main ()
{
	int n;
	scanf("%d",&n);
	printf("%dµÄ½×³ËÎª%d ",n,fun(n));
	return 0;
}
void compare(int* a,int* b)
{
	int temp=0;
	temp=*a;
	*a=*b;
	*b=temp;
}
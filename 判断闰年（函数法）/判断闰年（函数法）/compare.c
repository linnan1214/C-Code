int compare(int x)
{
	if((x%4==0&&x%100!=0)||(x%400==0))
		return x;
	else
		return 0;
}
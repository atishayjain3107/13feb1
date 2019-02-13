#include<stdio.h>
void swap(int*x,int*y)
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
int main()
{
	int x=2, y=3;
	swap(x,y);
	printf("/d",x);
	printf("/d",y);
	return(0);
}

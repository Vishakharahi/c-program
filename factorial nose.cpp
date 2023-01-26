#include<stdio.h>
fact(int x)
{
	int r;
	if(x==1)
	return 1;
	r=x*fact(x-1);
	
}
int main()
{
	int b;
	b=fact(3);
	printf("%d",b);
}

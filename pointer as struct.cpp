#include<stdio.h>
struct a
{
	int*p;
}obj;
int main()
{
	int a=10;
	obj.p=&a;
	printf("%d",*obj.p);
}

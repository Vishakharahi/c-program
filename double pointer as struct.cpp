#include<stdio.h>
struct a
{
	int*p;
	int*p1;
	int*p2;
	int*p3;
}obj;
int main()
{
	int a=10;
	int b=20;
	obj.p=&a;
	printf("%d\n",*obj.p);
	obj.p1=&b;
	printf("%d\n",*obj.p1);
    obj.p2=&a;
	printf("%d\n",*obj.p2);
    obj.p3=&b;
	printf("%d\n",*obj.p3);

}


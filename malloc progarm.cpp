#include<stdio.h>
int main()
{
	int*p;
	printf("before=%p\n\t",p);
	p=(int*)melloc(5*sizeof(int));
	printf("after=%p\n\t",p);
}

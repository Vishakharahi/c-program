#include<stdio.h>
int main()
{
	int a,b,ctotal;
	float per;
	printf("A=\n");
	sacanf("%d",&a);
	printf("B=\n");
	sacanf("%d",&b);
	printf("C=\n");
	sacanf("%d",&c);
	total=a+b+c;
	per total/3;
	if(per>=70)
	printf("DIST");
	else if(per>=60&&per<70)
	printf("first class");
	else if(per>=50&&per<60)
	printf("second class");
	else if(per>=40&&per<50)
	printf("pass class");
	else if(per<40)
	printf("fail");
	
	
}

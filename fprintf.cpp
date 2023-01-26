#include<stdio.h>
int main()
{
	FILE*p;
	p=fopen("new2.txt","w");
	fprintf(p,"%s","hello");
	fclose(p);
}

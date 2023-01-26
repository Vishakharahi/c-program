#include<stdio.h>
int main()
{
	FILE*p;
	p=fopen("new2.txt","r");
	char arr[20];
	fscanf(p,"%s",arr);
	fclose(p);
}

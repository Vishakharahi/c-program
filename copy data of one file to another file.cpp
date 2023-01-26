#include<stdio.h>
int main()
{
	FILE*fp1,*fp2;
	fp1=fopen("new.txt","w");
	fprintf(fp1,"%s","hello");
	fclose(fp1);
	fp1=fopen("new.txt","r");
	fp2=fopen("new.txt1","w");
	char ch;
	while((ch=getc(fp1))!=NULL)
	putc(ch,fp2);
	fclose(fp2);
	
	
}

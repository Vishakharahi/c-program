#include<stdio.h>
int main()
{
	int i;
	char a[10]="hello ";
	char b[10]=" ";
	for(i=0;a[i]!=NULL;i++)
   {  
    b[i]=a[i];
   }
   b[i]=NULL;
   printf("%s",b);
	
}

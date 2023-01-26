#include<stdio.h>
#include<conio.h>
int 
main()
{
	int i,j,*a,n,ch,f=0;
	printf("enter n:");
	scanf("%d",&n);
	printf("\n enter array value:");
	//enter the n element value
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter number index to search:");
	scanf("%d",&ch);
	for(i=0;i<n;i++)
	{
		if(i==ch)
		{
			printf("\n value founded at position[%d]\n\n value is a[%d]:%d",i,i,a[i]);
			f=1;
		}
	}
	if(f==0)
	printf("\n value not found \n please check the index");
	getch();
	
}

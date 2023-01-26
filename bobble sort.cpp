#include<stdio.h>
#include<conio.h>
#define MAX 20
int main()
{
	int arr[MAX],i,j,k,temp,n,xchanges;
	printf("\nEnter the number of element:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter element%d:",i+1);
		scanf("%d",&arr[i]);
	}
	printf("\nUnsorted list is:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		xchanges=0;
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				xchanges++;
			}
			
		}
		if(xchanges==0)
		break;
		printf("\nAfter pass%d elements are:",i+1);
		for(k=0;k<n;k++)
		printf("%d",arr[k]);
		printf("\n");
		
	}
	printf("\nSored list is:\n");
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[10]={0,21,19,23,67,35,28,37,89,55};
	int i,num;
	for(i=0;i<=9;i++)
	printf("%d\n",arr[i]);
	printf("\n enter the number to search:");
	scanf("%d",&num);
	for(i=0;i<=9;i++)
	{
		if(arr[i]==num)
		break;
	}
	if(i==10)
	printf("\n number is not found in array list\n");
	else
	printf("\n number is found at:%d position",i+1);
}

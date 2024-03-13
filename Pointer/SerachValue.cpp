#include<stdio.h>
int main()
{
	int size,skey,flag=0;

	printf("Enter Size Of Array : ");
	scanf("%d",&size);
	int arr[size];
	int *ptr = arr;
	printf("Enter Array Element : \n");
	for(int i=0; i<size; i++)
	{
		scanf("%d",(ptr+i));
	}
	
	printf("Array Element : \n");
	for(int i=0; i<size; i++)
	{
		printf("%d  ",*(ptr+i));
	}
	
	printf("\nEnter Search Value : ");
	scanf("%d",&skey);
	
	for(int i=0; i<size; i++)
	{
		if(*(ptr+i) == skey)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("Value Found");
	else
	printf("Not Found");
	
	
	
	return 0;
}

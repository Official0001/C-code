#include<stdio.h>
int main()
{
	int a[5],*ptr;
	ptr= &a[0];
	printf("Enter Array Element :\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",ptr+i);
	}
	
	printf("Array Element is : \n");
	for(int i=0; i<5; i++)
	{
		printf("%d ",*ptr);
	}
	
	
	
	
	return 0;
}

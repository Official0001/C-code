#include<stdio.h>
int main()
{
	int size;
	printf("Enter Size of Array : ");
	scanf("%d",&size);
	int a[size];
	printf("Enter element in array : ");
	for(int i=0; i<size; i++)
	scanf("%d",&a[i]);
	
	
	printf("Missing Element are : ");
	for(int i=0; i<size-1; i++)
	{
		for(int j=a[i]+1; j<a[i+1]; j++)
		{
			printf("%d\t",j);
		}
	}
	
	return 0;
}

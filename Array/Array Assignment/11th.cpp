#include<stdio.h>
int main()
{
	int size,index;
	printf("Enter size of Array ");
	scanf("%d",&size);
	int a[size];
	printf("Enter Element in Array");
	for(int i=0; i<size; i++)
		scanf("%d",&a[i]);
		
	printf("Array Element is :  ");
	for(int i=0; i<size; i++)
		printf("%d  ",a[i]);
		
	printf("\nEnter Index which you want to Rotate : ");
	scanf("%d",&index);
	
	for(int i=0; i<index; i++)
	{ 
		int temp = a[0];
		for(int j=0; j<size; j++)
		{
			a[j] = a[j+1];
		}
		a[size-1] = temp;
	}
	printf("\nAfter Rotating from %d Index :  ",index);
	for(int i=0; i<size; i++)
		printf("%d  ",a[i]);
	
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int size;
	printf("Enter Size of Array: ");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter Element in Array : ");
	for(int i=0; i<size; i++)
		scanf("%d",&a[i]);
	
	printf("Array Element  : ");
	for(int i=0; i<size; i++)
		printf("%d  ",a[i]);
		
	int no=size/2 , count=0;
	for(int i=0; i<size; i++)
	{
		int temp=a[i];
		for(int j=i+1; j<size; j++)
		{
			if(temp == a[j])
			{
				count++;
			}	
		}
	}
	
	if(no<count)
		printf("\nThere is Majority Element in Array");
	else
		printf("\nThere is No Majority Element in Array");
	
	return 0;
}

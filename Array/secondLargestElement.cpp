#include<stdio.h>
int main()
{
	int size,i,j;
	printf("Enter size : ");
	scanf("%d",&size);
	int a[size];
	printf("Enter element : ");
	for(i=0; i<size; i++)
	scanf("%d",&a[i]);
	
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	

	int max=0;
	for(i=0; i<size; i++)
	{
		for(j=i+1; j<size; j++)
		{
			if(a[i]<a[j])
			{
				max=a[i];
			}
		}
	}
	printf("Second largest element : %d",max);
	
	return 0;
}

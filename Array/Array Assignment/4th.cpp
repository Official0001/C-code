#include<stdio.h>
int main()
{
	int a[5];
	printf("Enter Element In Array");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	printf("Ascending Order :\n");
	for(int i=0; i<5; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0;
}

#include<stdio.h>
int main()
{
	int arr1[5],arr2[5],sum[5];
	printf("Enter Element Of Array1\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	printf("Enter Element Of Array2\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&arr2[i]);
	}
	
	printf("Sum Of Two Array\n");
	for(int i=0; i<5; i++)
	{
		sum[i] = arr1[i] + arr2[i];
		printf("Sum of Array of Index %d is %d\n",i,sum[i]);
	}
	
	
	return 0;
}

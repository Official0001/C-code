#include<stdio.h>
int main()
{
	int array[2][3],sum;
	
	printf("Enter Element of Matrix :\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("Matrix is : \n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",array[i][j]);
		}
		printf("\n");
	}
	
	printf("Sum Matrix is : \n");
	for(int i=0; i<2; i++)
	{
		sum=0;
		for(int j=0; j<3; j++)
		{
			sum=sum+array[i][j];
		}
		printf("Sum Of %d Row is %d",i+1,sum);
		printf("\n");
	}
	
	return 0;
}

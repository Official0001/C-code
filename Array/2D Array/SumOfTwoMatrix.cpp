#include<stdio.h>
int main()
{
	int array1[2][3],array2[2][3],sum[2][3];
	
	printf("Enter Elements of 1st Matrix:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&array1[i][j]);
		}
	}
	
	printf("Enter Elements of 2nd Matrix:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&array2[i][j]);
		}
	}
	
	printf("1st Matrix is :\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",array1[i][j]);
		}
		printf("\n");
	}
	
	printf("2nd Matrix is :\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",array2[i][j]);
		}
		printf("\n");
	}
	
	
	
	printf("Sum Matrix is :\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			sum[i][j] = array1[i][j] + array2[i][j];
		}
	}
	
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}
	
	

	
	
	return 0;	
}

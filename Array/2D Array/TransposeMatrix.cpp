#include<stdio.h>
int main()
{
	int a[2][3];
	
	printf("Enter Element of Matrix:\n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix is : \n");
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Transpose of Matrix : \n");
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<2; j++)
		{
			printf("%d  ",a[j][i]);
		}
		printf("\n");
	}
	
	return 0;
}

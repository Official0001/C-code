#include<stdio.h>
int main()
{
	int size;
	
	printf("Enter the size of Sqaure Matrix : ");
	scanf("%d",&size);
	int a[size][size];
	printf("Enter ELement In Matrix: \n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Matrix is : \n");
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size; j++)
		{
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	
      int sum=0;
    for (int i=0; i<size; i++) 
	{
        for (int j=0; j<size; j++) 
		{
            if (i+j == size-1) 
                sum = sum+a[i][j];
        }
    }
	printf("Sum of Right Diagonal is : %d", sum);
	
	return 0;
}

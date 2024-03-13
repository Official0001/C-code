#include<stdio.h>
int main()
{
	int array[5],sum=0;
	
	printf("Enter Element in Array :\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("Element in Array : \n");
	for(int i=0; i<5; i++)
	{
		printf("%d\t",array[i]);
	}
	

	for(int i=0; i<5; i++)
	{
		sum = sum+array[i];
	}
	printf("\nSum Of all Array Element : %d",sum);
	
	
	return 0;
}

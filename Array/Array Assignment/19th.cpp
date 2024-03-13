#include<stdio.h>
int main()
{
	int size;
	printf("Enter Size : ");
	scanf("%d",&size);
	int a[size];
	printf("Enter Element in Array ");
	for(int i=0; i<size; i++)
	scanf("%d",&a[i]);
int sum;
	for(int i=0; i<size; i++)
	{ 
			 sum=0;
		for(int j=i; j<size; j++)
		{
			int result = a[i]+a[j] ;
			if(result>sum)
			sum = result;
		}
		
	}
	printf("The maximum circular sum in th above array is : %d",sum);
	
	
	
	
	return 0;
}

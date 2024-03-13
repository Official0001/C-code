#include<stdio.h>
int main()
{
	int a[5];
	
	printf("Enter Element in Array : \n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nThe Even Element are : ");
	for(int i=0; i<5; i++)
	{
		
		if(a[i]%2==0)
		printf("%d\t",a[i]);
	}

	printf("\nThe Odd Element are : ");
	for(int i=0; i<5; i++)
	{
		if(a[i]%2==1)
		printf("%d\t",a[i]);
	}
	
	
	
	return 0;
}

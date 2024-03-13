#include<stdio.h>
int main()
{
	int size,d,i,j;
	printf("Enter size : ");
	scanf("%d",&size);
	
	int a[size];
	printf("Enter Element : ");
	for(int i=0; i<size; i++)
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
	printf("Aftre Ascending");
	for(i=0; i<size; i++)
	printf("%d\t",a[i]);
	
	printf("\n\n");
	
	
	
	printf("Enter element to delete : ");
	
	scanf("%d",&d);
	
	for(i=d-1; i<size-1; i++)
	{
		a[i] = a[i+1];
	}
	
	printf("After Deletion");
	for(i=0; i<size-1; i++)
	printf("%d\t",a[i]);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int size,index,i,j,temp;
	
	printf("Enter Size of Array\n");
	scanf("%d",&size);
	
	int a[size];
	
	printf("Enter Values in Array\n");
	for(i=0; i<size; i++)
	scanf("%d",&a[i]);
	
	for(i=0; i<size; i++)
	printf("%d\t",a[i]);
	
	printf("\nEnter index from which you want to rotate array\n");
	scanf("%d",&index);
	
	for(i=0; i<index; i++)
	{
		temp=a[0];
		for(j=0; j<size; j++)
		{
			a[j]=a[j+1];
		}
		a[size-1]=temp;
	}
	
	for(i=0; i<size; i++)
	printf("%d\t",a[i]);
	
	return 0;
}

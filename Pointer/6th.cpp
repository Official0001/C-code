#include<stdio.h>
int main()
{
	int size1,size2,size3 ,i,j;
	
	printf("Enter Size Of Array 1 : ");
	scanf("%d",&size1);
	int a[size1];
	printf("Enter First Array : \n");
	for( i=0; i<size1; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter Size Of Array 2 : ");
	scanf("%d",&size2);
	int b[size2];
	printf("Enter Second Array : \n");
	for( i=0; i<size2; i++)
	{
		scanf("%d",&b[i]);
	}
	
	size3 = size1 + size2;
	int c[size3];
	for(i=0; i<size1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<size2; i++)
	{
		c[size1 + i] = b[i];
	}
	
	printf("Merged Array is : ");
	for(i=0; i<size3; i++)
	{
		printf("%d  ",c[i]);
	}

	
	printf("\nAfter Sorting in Descending Order\n");
	for(int i=0; i<size3; i++)
	{
		for(int j=i+1; j<size3; j++)
		{
			if(c[i]<c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;	
			}
		}
	}
	for(i=0; i<size3; i++)
	printf("%d\t",c[i]);
	
	
	return 0;
}

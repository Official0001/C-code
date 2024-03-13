#include<stdio.h>
int main()
{
	int i,j,count=0,size;
	
	printf("Enter size of array :");
	scanf("%d",&size);
	int a[size];
	printf("Enter the Array Element \n");
	for(i=0; i<size; i++)
	scanf("%d",&a[i]);
	
	printf("Array Element is :");
	for(i=0; i<size; i++)
	printf("%d",a[i]);
	
	printf("The inversions are : ");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				printf("(%d,%d)",a[i],a[j]);
				count++;
			}
		}
	}
	printf("\nThe number of inversion can be formed from the array is : %d",count);
	
	
	return 0;
}

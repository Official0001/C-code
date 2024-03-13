#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,size,max; 
	
	printf("\n Enter Size");
	scanf("%d",&size);
	
	p = (int*)malloc(size*sizeof(int));
	
	printf("\nEnter Element");
	for(int i=0; i<size; i++)
	{
		scanf("%d",(p+i));
	}
	
	printf("\nElement is : ");
	for(int i=0; i<size; i++)
	{
		printf("%d  ",*(p+i));
	}
return 0;	
}

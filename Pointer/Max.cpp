#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,size,max; 
	
	printf("\n Enter Size");
	scanf("%d",&size);
	
	p = (int*)malloc(size*sizeof(int));
	
	printf("\nEnter Element Address");
	for(int i=0; i<size; i++)
	{
		printf("\nEnter Number");
		scanf("%d",p);
		p++;
	}
	printf("\n After Travel Address is %u",p);
	p=p-size;
	printf("\nAfter Setback Address is %u",p);
	max=*p;
	
	for(int i=0; i<size; i++)
	{
		if(max<*p)
		{
			max= *p;
		}
		p++;
	}
	printf("\n Max Value is %d",max);
	
	return 0;
}

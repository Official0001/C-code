#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,size;
	
	printf("Enter Size");
	scanf("%d",&size);
	p =(int*)malloc(size * sizeof(int));
	
	printf("Enter 5 Element in Ascending Order");
	for(int i=0; i<size; i++)
	{
		scanf("%d",p);
		p++;
	}
	p=p-5;
	
	printf("Missing Element are");
	for(int i=0; i<4; i++)
	{
		for(int j=*(p+i)+1; j<*(p+i+1); j++)
		{
			printf("\t %d",j);
		}
	}
	
	return 0;
}

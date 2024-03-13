#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q,temp, size,i;
	
	printf("Enter Size");
	scanf("%d",&size);
	
	p = (int*)malloc(size* sizeof(int));
	
	q = p+size-1;
	
	for(i=0; i<size; i++)
	{
		scanf("%d",p+i);
	}
	printf("%d------>%d",p,q);
	
	printf("\nArray is\n");
	for(i=0; i<size; i++)
	{
		printf("%d  ",*(p+i));
	}
	
	
	for(i=0; i<size/2; i++)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
	p=p-(size/2);
	printf("\nAfter Reverse\n");
	for(i=0; i<size; i++)
	{
		printf("%d  ",*(p+i));
	}
	
	return 0;
}

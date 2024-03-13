#include<stdio.h>
int main()
{
	int range,*ptr;
	
	ptr = &range;
	printf("Enter Range : ");
	scanf("%d",&range);
	
	while(*ptr>=1)
	{
		printf("%d ",*ptr);
		range--;
	}
}

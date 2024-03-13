#include<stdio.h>
int main()
{
	int *ptr ,a;
	a=100;
	ptr= &a;
	
	printf("%d\n",*ptr);
	printf("%d",ptr);
	
	return 0;
}

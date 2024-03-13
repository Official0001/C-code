#include<stdio.h>
int main()
{
	int a[5], sum=0, *ptr;
	
	printf("Enter Array Element :\n");
	for(int i=0; i<5; i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(ptr=&a[0];  ptr<&a[5];  ptr++)
	{
		sum = sum + *ptr ;
	}
	printf("\nSum : %d",sum);
	
	return 0;
}

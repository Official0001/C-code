#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter the First and Second Number : ");
	scanf("%d%d",&a,&b);
	
	printf("Before Swapping :A = %d , B = %d \n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After Swapping :A = %d , B = %d \n",a,b);
	
	

	return 0;
	
}

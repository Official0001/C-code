#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter the First and Second Number : ");
	scanf("%d%d",&a,&b);
	
	printf("Before Swapping :A = %d , B = %d \n",a,b);
	
	c=a;
	a=b;
	b=c;

	
	printf("After Swapping :A = %d , B = %d \n",a,b);
	
	

	return 0;
	
}

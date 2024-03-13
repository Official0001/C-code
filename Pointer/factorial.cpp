#include<stdio.h>
int main()
{
	int num,fact=1,*ptr;
	printf("Enter Number : ");
	scanf("%d",&num);
	
	ptr= &num;
	for(int i=1; i<=*ptr; i++)
	{
		fact = fact * i;
	}
	printf("%d Factorial is : %d",num,fact);
	

	
	
	
	return 0;
}

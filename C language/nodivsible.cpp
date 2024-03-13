#include<stdio.h>
int main()
{
	int n1;
	
	printf("Enter the Number: ");
	scanf("%d",&n1);
	
	(n1%5==0 && n1%11==0)?printf("No is divisible"):printf("No is not divisible");

	return 0;
	
}

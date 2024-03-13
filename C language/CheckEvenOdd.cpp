#include<stdio.h>
int main()
{
	int no;
	
	printf("Enter the Number : ");
	scanf("%d",&no);
	
	(no % 2 == 0)?(printf("%d is Even number\n", no)):(printf("%d is Odd  number\n", no));  
	
	return 0;
}

#include<stdio.h>
int main()
{
	int no,sum=0;
	
	printf("Enter the Number : \n");
	scanf("%d",&no);
	
	sum=0;
	sum = no%10;
	//no=no/10;
	sum = sum + no;
	

	printf("Sum of Four Digit is : %d",sum);
	
	
	return 0;
	
}

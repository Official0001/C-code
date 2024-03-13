#include<stdio.h>
int main()
{
	int no;
	printf("Enter Any number");
	scanf("%d",&no);
	
	int lastDigit=no%10;
	
	while(no>=10){
		no=no/10;
	}
	int firstDigit=no;
	
	printf("First Digit : %d\n",firstDigit);
	printf("Last Digit : %d",lastDigit);
	
	return 0;
}

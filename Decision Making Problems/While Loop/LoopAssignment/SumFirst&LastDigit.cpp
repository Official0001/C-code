#include<stdio.h>
int main()
{
	int no,lastDigit,firstDigit,sum;
	
	printf("Enter Any Positive Number");
	scanf("%d",&no);
	
	lastDigit= no%10;
	
	while(no>10)
	{
		no=no/10;
	}
	firstDigit=no;
	
	sum = firstDigit + lastDigit;
	printf("\nSum Of First And Last Digit is : %d",sum);
	
	return 0;
}

#include<stdio.h>
int main()
{
	int n;
	printf("Enter Any Number");
	scanf("%d",&n);
	
	int lastNumber=n%10;
	
	while(n>=10){
		n=n/10;
	}
	int firstNumber=n;
	
	int sum=firstNumber+lastNumber;
	printf("Sum of First And Last Digit is : %d",sum);
}

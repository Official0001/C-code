#include<stdio.h>
int main()
{
	int n,a, firstDigit,lastDigit;
	
	printf("Enter Number : ");
	scanf("%d",&n);

	lastDigit=n%10;

	while(n>=10){
		n=n/10;
	}
	printf("First number : %d\n",n);
	
	printf("Last Number : %d",lastDigit);
	

	
	
	
	
}

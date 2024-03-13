#include<stdio.h>
int factorial(int n){
	if(n==1)
	return 1;
	
	int ans = n*factorial(n-1);
	
	return ans;
}


int main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	int fact = factorial(n);
	printf("Factorial is : %d",fact);
	
	return 0;
}

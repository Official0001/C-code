#include<stdio.h>
int main()
{
	void getFactorial(int);
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	
	getFactorial(num);
	
	return 0;
}

void getFactorial(int n){
	int	fact =1;
	for(int i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("Factorial of Number is : %d",fact);
}

#include<stdio.h>
int fibonacci(int n){
	
	if(n==1 || n==2)
	return 1;
	
//	int a1 = fibonacci(n-1);
//	int a2 = fibonacci(n-2); 
//	int ans = a1+a2;
	return fibonacci(n-1) + fibonacci(n-2); 
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	int f = fibonacci(num);
	printf("Fibonacci  Series on %d term is : %d",num,fibonacci(num));
	
	return 0;
}

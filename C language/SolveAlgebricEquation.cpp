#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter Value of A,B : \n");
	scanf("%f%f",&a,&b);
	
	float LHS = (a+b)*(a+b);
	printf("LHS : %f\n",LHS);
	
	float RHS = (a*a + 2*a*b + b*b);
	printf("RHS : %f\n",RHS);
	
	( LHS == RHS)? printf("Test Passed"):printf("Test Failed");
	
	return 0;
}

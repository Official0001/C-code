//Calculate Simple interest

#include<stdio.h>
int main()
{
	float principle,time,rate,si;
	
	printf("Enter The Principle Amount : \n");
	scanf("%f",&principle);
	
	printf("Enter The Time : \n");
	scanf("%f",&time);
	
	printf("Enter The Rate of Amount : \n");
	scanf("%f",&rate);
	
	si = (principle*time*rate)/100;
	printf("Simple Interest is : %f",si);
	
	return 0;
}

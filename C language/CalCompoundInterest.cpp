//calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main()
{
	float principal,time,rate,si,Amt;
	
	printf("Enter The Principle Amount : \n");
	scanf("%f",&principal);
	
	printf("Enter The Time : \n");
	scanf("%f",&time);
	
	printf("Enter The Rate of Amount : \n");
	scanf("%f",&rate);
	
	Amt = principal *(pow((1 + rate / 100),time)); 
	
	float CI = Amt - principal;
	printf("Compound Interest is : %lf",CI); 
	
	return 0;
}

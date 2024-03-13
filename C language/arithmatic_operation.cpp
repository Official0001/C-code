#include<stdio.h>  //
int main()         //
{
	int no1,no2,sum,div,mul,sub;  //
	
	printf("Enter Any Two Numbers : \n");
	scanf("%d%d",&no1,&no2);
	
	//Addition
	sum = no1+no2;
	printf("Summation of Two Number is : %d\n",sum);
	
	//Substraction
	sub = no1-no2;
	printf("Substraction of Two Number is : %d\n",sub);
	
	//Division
	div = no1/no2;
	printf("Division of Two Number is : %d\n",div);
	
	//multiplication
	mul = no1*no2;
	printf("Multiplication of Two Number is : %d\n",mul);
	
	
	return 0;
}

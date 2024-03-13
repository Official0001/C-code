#include<stdio.h>
int main()
{
	float len,m,km;
	
	printf("Enter the Length in Centi Meter : \n");
	scanf("%f",&len);
	
	m=len/100;
	printf("%f centimeter = %0.2f meter\n",len,m);
	
	km=len/100000;
	printf("%f centimeter = %f Kilometer",len,km);
	
	return 0;
}

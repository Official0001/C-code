#include<stdio.h>
int main()
{
	float fg,m,g=9.81;
	
	printf("Enter the mass of Object:");
	scanf("%f",&m);

	fg = m*g;
	printf("Force of Gravity is : %.0f Newton",fg);
	
	return 0;
	
}

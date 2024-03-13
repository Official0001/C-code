#include<stdio.h>
int main()
{
	int bonus,salary;
	
	printf("Enter Salary : ");
	scanf("%d",&salary);
	int a = (salary*10)/100;
	int b = (salary*7)/100;
	int c = (salary*5)/100;
	
	(  (salary<10000) ? printf("Bonus is: %d",a) : (salary>10000  && salary<30000) ? printf("Bonus is: %d",b):printf("Bonus is: %d",c)); 
	
	return 0;
}

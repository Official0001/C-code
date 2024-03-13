#include<stdio.h>
int main()
{
	int salary;
	
	printf("Enter Basic Salary : ");
	scanf("%d",&salary);
	int a=( (salary*0.2)+(salary*0.8)+salary);
	int b=((salary*2.5)+(salary*9.0)+salary);
	int c= ((salary*3.0)+(salary*9.5)+salary);
	
	(salary<=10000) ? printf("Gross Salary is : %d",a ): 
	(salary<=20000) ? printf("Gross Salary is : %d",b ):
	(salary>20000) ? printf("Gross Salary is : %d",c ): printf(""); 
		
	return 0;
	
}

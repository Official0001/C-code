#include<stdio.h>
int main()
{
	int salary;
	
	printf("Enter Basic Salary : ");
	scanf("%d",&salary);
	
	if (salary<=10000){
		int	a=( (salary*0.2)+(salary*0.8)+salary);
		printf("Gross Salary is : %d",a );
	}
	
	else if (salary<=20000){
		int b=((salary*0.25)+(salary*0.9)+salary);
		printf("Gross Salary is : %d",b );
	}
	
	else {
		int c= ((salary*0.3)+(salary*0.95)+salary);
		printf("Gross Salary is : %d",c );
	}
		
	return 0;
	
}

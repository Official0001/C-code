#include<stdio.h>
struct employee
{
	int id;
	int salary;
	char name;	
}e2={123,50000,'b'};

int main()
{
	
	struct employee e1;
	
	printf("Enter 1st Employee Detail :");
	scanf("%d%d%s",&e1.id,&e1.salary,&e1.name);
//	e1.id = 123;
//	e1.salary = 50000;
//	e1.name = 'a';
	
	printf("1st Employee Info : %d\t%d\t%c",e1.id, e1.salary, e1.name);
	
	
	
	
	printf("\n2nd Employee Info : %d\t%d\t%c",e2.id, e2.salary, e2.name);
	return 0;	
}

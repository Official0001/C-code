#include<stdio.h>
int main()
{
	int gs,Wdays,prDaySalary,bs;
	
	printf("Enter the Number of Working Days : ");
	scanf("%d",&Wdays);
	
	printf("Enter the Per Day Salary : ");
	scanf("%d",&prDaySalary);
	
	bs = Wdays*prDaySalary;
	printf("\n\nBasic Salary : %d\n",bs);
	
	int DA = (bs*20)/100;   //20% on Basic Salary
	int HRA =(bs*40)/100;  // 40% on Basic Salary
	
	gs = bs + DA + HRA;
	printf("Gross Salary : %d\n",gs);
	
	return 0;
}

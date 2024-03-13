#include<stdio.h>
int main()
{
	int age;
	char status;
	char gender;
	printf("Enter Employee Age : ");
	scanf("%d",&age);
	printf("\nEnter Gender : ");  //  m = Male,  f = Female
	scanf("%c",&gender);
	printf("\nEnter Marital Status : ");//  M=Married , U=Unmarried
	scanf("%c",&status);
	
	if( (status=='M') || (status=='U' && age>30 && gender=='m') || (status=='U' && age>25 && gender =='f'))
	printf("Eligible For Insurnace");
	else
	printf("Eligible For Insurnace");
	
	return 0;
}

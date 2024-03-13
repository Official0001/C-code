#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age of Patient : ");
	scanf("%d",&age);
	
	(age<17) ? printf("100 INR") : (age>=17 || age<=40) ? printf("200 INR") : (age>40 || age<=60) ? printf("300 INR") : (age>60) ? printf("Free"):printf("");
	
	
	return 0;
}

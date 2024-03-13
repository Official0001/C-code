#include<stdio.h>
int main()
{
	int age;
	printf("Enter age: ");
    scanf("%d", &age);
	
	if(age>=18)
	{
		if(age<=55)
			printf("Eligible for a suitable job\n");
		else
			printf("Not Eligible for a suitable job your age is above 55");
	}
	else
		printf("Not Eligible for a suitable job your age is below 18");
	
	return 0;
}

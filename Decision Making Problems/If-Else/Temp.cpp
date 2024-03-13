#include<stdio.h>
int main()
{
	float temp;
	
	printf("Enter Temperature in Centigrade : ");
	scanf("%f",&temp);
	
	if(temp<0)
		printf("Freezing Wheather");
	
	else if(temp>=0 && temp<=10)
		printf("Very Cold Wheather");
		
	else if(temp>=11 && temp<=20)
		printf("Cold Wheather");
	
	else if(temp>=21 && temp<=30)
		printf("Normal in Temperature");
	else if(temp>=31 && temp<=40)
		printf("Its Hot");
	else if(temp>=40)
		printf("Its Very Hot");
	else
	printf("invalid temp");
		
	return 0;
}

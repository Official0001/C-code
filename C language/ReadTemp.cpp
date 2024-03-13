#include<stdio.h>
int main()
{
	float temp;
	
	printf("Enter Temperature in Centigrade : ");
	scanf("%f",&temp);
	
	(temp<0) ? printf("Freezing Wheather"):
	(temp>=0 && temp<=10) ? printf("Very Cold Wheather"):
	(temp>=11 && temp<=20) ? printf("Cold Wheather"):
	(temp>=21 && temp<=30) ? printf("Normal in Temperature"):
	(temp>=31 && temp<=40) ? printf("Its Hot"):
	(temp>=40) ? printf("Its Very Hot"):
	printf("invalid temp");
		
	return 0;
}

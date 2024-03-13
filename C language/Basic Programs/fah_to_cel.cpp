#include<stdio.h>
int main
{
float farenheit, celcius;
	
	printf("Enter the Tempature in Farenheit: ");
	scanf("%f",&farenheit);
	
	celcius = ((farenheit-32)*5)/9;  
	printf("Tempature in Celcius is: %f",celcius);
	
	
	
	return 0;
}

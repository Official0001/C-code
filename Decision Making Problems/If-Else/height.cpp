#include<stdio.h>
int main()
{
	float h;
	
	printf("Enter Height in Centimeter : ");
	scanf("%.3f",&h);
	
	if(h<150.0)
		printf("The Person is Dwarf");
		
	else if(h>=150.0 && h<165.0)
		printf("The Person is Average Heighted");
		
	else if(h>=165.0 && h<=195.0)
	printf("The Person is Tailer");
	
	else
		printf("");
		
	return 0;
}

#include<stdio.h>
int main()
{
	float h;
	
	printf("Enter Height in Centimeter : ");
	scanf("%.3f",&h);
	
	(h<150.0) ? printf("The Person is Dwarf"):
	(h>=150.0 && h<165.0) ? printf("The Person is Average Heighted"):
	(h>=165.0 && h<=195.0) ? printf("The Person is Tailer"):printf("");
		
	return 0;
}

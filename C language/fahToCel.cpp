#include<stdio.h>

int main()   
    {
		float Fah, Cel;  
		
		printf("Enter the Tempature in Fahrenheit: ");
    	scanf("%f",&Fah);
		 
        Cel = (Fah-32) * 5 / 9;  
    
    	printf("\n\n Temperature in Celsius is : %f",Cel);  
    	
        return 0;  
    }  



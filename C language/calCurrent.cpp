#include<stdio.h>
int main()
{
	float res,vol,c;
	printf("Enter the Voltage And Resistance value : \n");
    scanf("%f%f",&vol,&res);
    
    c = vol/res;
    printf("Current is: %f amp",c);
    
    return 0;
}

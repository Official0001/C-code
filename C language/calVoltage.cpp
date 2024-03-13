#include<stdio.h>
int main()
{
	float res,vol,c;
	printf("Enter the Current And Resistance value : \n");
    scanf("%f%f",&c,&res);
    
    vol = c*res;
    printf("Voltage is: %f Volt",vol);
    
    return 0;
}

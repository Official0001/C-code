#include<stdio.h>
int main()
{
	float res,vol,c;
	printf("Enter the voltage And current value : \n");
    scanf("%f%f",&vol,&c);
    
    res = vol/c;
    printf("Resistance is: %f Ohm",res);
    
    return 0;
    
}

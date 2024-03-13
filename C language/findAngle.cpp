#include<stdio.h>
int main()
{
	float a1,a2,a3;
	printf("Enter the First and Second Angle : \n");
	scanf("%f%f",&a1,&a2);
	
	a3 = 180-(a1+a2);
	printf("Third Angle is : %f\n",a3);
	
	return 0;	
	
}

#include<stdio.h>
int main()
{
	void area(float);
	float radius;
	printf("Enter Radius of Circle : ");
	scanf("%f",&radius);
	
	area(radius);
	return 0;
}

void area(float r)
{
	printf("Area of Circle is : %f",3.14f*r*r);
}

#include<stdio.h>
int main()
{
	float radius,dia,area,cir;
	
	printf("Enter The Radius of Circle : \n");
	scanf("%f",&radius);
	
	dia = 2*radius;
	printf("Diameter Of Circle is : %f\n",dia);
	
	area = 3.14*radius*radius;
	printf("Area Of Circle is : %f\n",area);
	
	cir = 2*3.14*radius;
	printf("Area Of Circumference is : %f\n",cir);
	
	
	
	
}

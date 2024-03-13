#include<stdio.h>
int main()
{
	float len,breadth,area;
	
	printf("Enter the Length and Breadth of Rectangle : \n");
	scanf("%f%f",&len,&breadth);
	
	area = len * breadth;
	printf("Area of Rectangle is : %f",area);
	
	return 0;
}

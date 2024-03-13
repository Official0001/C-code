#include<stdio.h>
#include<math.h>
int main()
{
	float area, s , a ,side;
	
	printf("Side of Equilateral Triangle is : ");
	scanf("%f",&side);
	
	s=side*side;
	
    a=sqrt(3);	

	area = (a/4)*s;
	
	printf("Area of Equilateral Triangle is : %f",area);
	
	return 0;
}

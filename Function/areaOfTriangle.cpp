#include<stdio.h>
int main()
{
	void areaOfTriangle(int,int);
	int base,heigth;
	printf("Enter Base and Heigth : \n");
	scanf("%d%d",&base,&heigth);
	
	areaOfTriangle(base,heigth);
	
	return 0;
}

void areaOfTriangle(int b, int h){
	float result = 0.5f*b*h ;
	printf("Area of Triangle is : %f",result);
}

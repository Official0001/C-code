#include<stdio.h>
int main()
{
	void areaOfRectangle(int length, int width);
	int length, width;
	printf("Enter Length And Breadth of Rectangle : \n");
	scanf("%d%d",&length,&width);
	
 	areaOfRectangle(length,width);
	
	return 0;
}

void areaOfRectangle(int l, int w){
	int result = l * w ;
	printf("Area of Rectangle is : %d",result);
}


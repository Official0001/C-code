#include<stdio.h>
int main()
{
	int dis;
	float den;
	
	printf("Enter Density :");
	scanf("%f",&den);
	printf("Enter Distance :");
	scanf("%f",&dis);
	
	if( (dis>=0 &&dis<=100) && (den>0 && den<=2.8) )
		printf("crust");
		
	else if( (dis>=100 &&dis<=2900) && (den>2.8 && den<=4.6) )
		printf("Mantle");
		
	else if( (dis>=5100 &&dis<=6400) && (den>4.6 && den<=10.5) )
		printf("Outer Core");
		
	else
		printf("Inner Core");
	
	return 0;
}

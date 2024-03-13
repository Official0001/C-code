#include<stdio.h>
#include<math.h>
int main()
{
	float x1,y1,x2,y2;
	
	printf("Enter Points A Co-Ordinates :\n");
	scanf("%f%f",&x1,&y1);
	printf("Enter Points B Co-Ordinates :\n");
	scanf("%f%f",&x2,&y2);
	
	float distance = ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1));

	printf("Distance Between A and B is : %0.3f",sqrt(distance));
	
	return 0;
}

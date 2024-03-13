#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2;
	
	printf("Enter the Value of A,B,C :\n");
	scanf("%f%f%f",&a,&b,&c);
	
	float d = (b*b-(4*(a*c)));
	
	root1 = (-b + sqrt(d))/2*a;
	printf("root1 : %f.3\n",root1);
	
	root2 = (-b - sqrt(d))/2*a;
	printf("root2 : %f.3",root2);
		
	return 0;	
}

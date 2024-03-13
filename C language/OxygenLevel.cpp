#include<stdio.h>
int main()
{
	float o1,o2,o3,o4,o5;
	
	printf("Enter Oxygen Level of Ram  : ");
	scanf("%f",&o1);
	printf("Enter Oxygen Level of shyam  : ");
	scanf("%f",&o2);
	printf("Enter Oxygen Level of krish  : ");
	scanf("%f",&o3);
	printf("Enter Oxygen Level of vipul  : ");
	scanf("%f",&o4);
	printf("Enter Oxygen Level of naman  : ");
	scanf("%f",&o5);
	
	(o1>o2 && o1>o3 && o1>o4 && o1>o5) ? printf("Ram has Maximum Oxygen Level") : (o2>o1 && o2>o3 && o2>o4 && o2>o5) ? printf("shyam has Maximum Oxygen Level") : (o3>o1 && o3>o2 && o3>o4 && o3>o5) ? printf("Krish has Maximum Oxygen Level") :  (o4>o1 && o4>o2 && o4>o3 && o4>o5) ? printf("Vipul has Maximum Oxygen Level") : (o5>o1 && o5>o2 && o5>o3 && o5>o4) ? printf("Naman has Maximum Oxygen Level") : printf("Invalid");
	
	
	return 0;
}

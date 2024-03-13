#include<stdio.h>
int main()
{
	int yr,join,salary,yos;
	float eps;
	
	printf("Enter Current Year :");
	scanf("%d",&yr);
	printf("Enter Year of Joining :");
	scanf("%d",&join);
	printf("Enter Salary :");
	scanf("%d",&salary);
	printf("Enter Employee Performance :" );
	scanf("%f",&eps);
	
	 yos=yr-join; 
	
	if(yos>2 && salary>=20000 && eps>75 )
		printf("It is Permanent Employee");
	else
		printf("It is Permanent Employee");
		
	return 0;		
}
	
	

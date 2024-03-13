#include<stdio.h>
int main()
{
	int yr;
	
	printf("Enter Year :");
	scanf("%d",&yr);
	
	if( yr%4==0 && yr%100!=0 && yr%400==0) 
	{
		printf("Given Year is Leap Year");
	}
	else
	printf("Given Year is Not Leap Year");

	
	return 0;
}

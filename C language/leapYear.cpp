#include<stdio.h>
int main()
{
	int yr,leap;
	
	printf("Enter Year :");
	scanf("%d",&yr);
	
	
	
	( yr%4==0) ? printf("Given Year is Leap Year") : printf("Given Year is Not Leap Year");

	
	return 0;
	
}

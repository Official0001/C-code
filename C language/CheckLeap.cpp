#include<stdio.h>
int main()
{
	int yr;
	
	printf("Enter the year : ");
	scanf("%d",&yr);
	
	(yr%4==0)?printf("%d is Leap Year",yr):printf("%d is not Leap Year",yr);

	return 0;
	
}

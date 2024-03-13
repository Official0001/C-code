#include<stdio.h>
int stair(int n){
	if(n==1 || n==2 ) return n;
	
	int totalWays = stair(n-1) + stair(n-2);
	return totalWays;
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	stair(num);
	printf("If you have %d stairs so Total Numbers of Ways to go is %d",num,stair(num));

	return 0;
}

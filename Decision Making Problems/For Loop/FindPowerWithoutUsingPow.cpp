#include<stdio.h>
int main()
{
	int n,b;
	long power=1;
	
	printf("Enter base");
	scanf("%d",&b);
	
	printf("Enter Number index: ");
	scanf("%d",&n);
	
	for(int i=1; i<=n; i++){
		
	 power = power*b;
	}
	printf("%d",power);
	
	
	
	return 0;
}

#include<stdio.h>
void greeting(int n){
	if(n==0) return;
	
	printf("Hello\n");
	greeting(n-1);
	
	return;
}

int main()
{
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	greeting(n);
	
	return 0;
}

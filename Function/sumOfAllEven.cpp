#include<stdio.h>
void sum(int n, int a){
	if(n==0){
		printf("Summation is %d",a);
		return;
	}
	else{
		if(n%2==0)
		printf("%d",a);
		 a =a+n;
	}
	sum(n-1,a);
	return;
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	sum(num,0);
	
	return 0;
}

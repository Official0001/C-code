#include<stdio.h>
int main()
{
	void noReverse(int);
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	
	noReverse(num);
	
	return 0;
}

void noReverse(int n){
	int rev=0,rem;
	while(n>0){
		rem = n%10;
		rev = rev*10+rem;
		n= n/10;
	}
	printf("Reverse is : %d",rev);
}

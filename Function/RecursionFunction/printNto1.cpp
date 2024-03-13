#include<stdio.h>
void RevNoPrint(int n){
	if(n==0) return;
	
	printf("%d\n",n);
	RevNoPrint(n-1);
	
	return;
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	RevNoPrint(num);
	
	return 0;
}

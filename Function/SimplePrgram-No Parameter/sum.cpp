#include<stdio.h>
int main()
{
	void sum();  // Declaration

	sum();       // Calling
	
	return 0;
}

void sum(){
	int a,b,sum;
	printf("Enter Two Numbers : \n");     // Definition
	scanf("%d%d",&a,&b);
	sum =a+b;
	printf("Sum : %d",sum);
}

#include<stdio.h>
int power(int a ,int b){
	
	if(b==0) return 1;
	
	int p = a * power(a,b-1);
	
	return p;
}


int main()
{
	int base,pow;
	printf("Enter the Base and Power :  ");
	scanf("%d%d",&base,&pow);
	
	int p= power(base,pow);
	printf("%d raised to the power %d is : %d",base,pow,p);
	
	
	return 0;
}

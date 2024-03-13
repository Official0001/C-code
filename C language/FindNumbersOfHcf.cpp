//We have to find the Number
#include<stdio.h> 
int main()
{
	int a,b,x;
	
	printf("Enter Ratio Of Of Numbers : ");
	scanf("%d%d",&a,&b);
	
	printf("Enter Numbers of HCF : \n");
	scanf("%d",&x);
	
	int n1 = a*x;
	printf("Number 1 : %d",n1);
	
	int n2 = b*x;
	printf("Number 2 : %d",n1);
	
	return 0;
	
}

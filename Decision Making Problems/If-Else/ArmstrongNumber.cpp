#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter Any Three Digit Number : ");
	scanf("%d",&number);
	int temp=number;
    int n1 = (number / 100) % 10;        
    int n2 = (number / 10) % 10;
    int n3 = (number /1)%10;
  
    int sum =  (n1*n1*n1) + (n2*n2*n2) + (n3*n3*n3) ; 
   
    if(temp == sum)
    	printf("Given Number is Armstrong Number");
    else
    	printf("Given Number is Not Armstrong Number");
	
	return 0;
}

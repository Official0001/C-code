#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("Enter Any Number : ");
	scanf("%d",&n);
	int i=1;
	int temp=n;
	while(n>0)   
	{
		int fact=1 ,i=1;
		rem=n%10;
		    while(i<=rem){
			fact = fact*i;
			i++;
		    }
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum )
		printf("\nThe Number is Strong Number");
	else 
		printf("\nThe Number is Not Strong Number");
	
	return 0;
}

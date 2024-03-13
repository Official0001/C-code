#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter Any Number");
	scanf("%d",&n);
	int temp=n;
	while(n>0){
		int arm;
		int rem=n%10;
		if(rem!=0){
			 arm = rem*rem*rem;
		}
		sum =sum + arm;
		n=n/10;
		}
		
		if(temp==sum)
		printf("Armstrong");
		else
		printf("Not Armstrong");
	return 0;	
}

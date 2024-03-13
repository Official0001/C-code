#include<stdio.h>
int i=1;
int sum=0;
int sumEven(int n){
	
	if(i<=n)
	{
		if(i%2==1){
			sum = sum +i;
		
		}
			i++;	
			sumEven(n);	
	}
	else 
	return sum;
	
}

int main()
{
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	int sum=sumEven(num);
	printf("Odd Summation between  1 to %d = %d ", num,sum);
	
	
	return 0;
}

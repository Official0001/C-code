#include<stdio.h>
int main()
{
	void calSum(int);
	int num;
	printf("Enter Number : ");
	scanf("%d",&num);
	calSum(num);
	return 0;
}

void calSum(int  n)
{
	int sum=0;
	while(n>0)
    {
        int n1 = n % 10;
        sum = sum+n1;
        n=n/10;
    }
    printf("Sum Of its Digit is : %d ",sum);
}

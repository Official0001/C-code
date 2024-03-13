#include<stdio.h>
int fib(int n) {
    if(n==0 || n==1)
        return n;

    int term1=fib(n - 1);
    int term2=fib(n - 2);

    return term1+term2;
}

int main() {
    int num;
    printf("Enter Number of Terms: ");
    scanf("%d",&num);

    printf("Fibonacci Series: ");
    for (int i=1; i<num; i++) 
	{
        printf("%d ",fib(i));
    }

    return 0;
}


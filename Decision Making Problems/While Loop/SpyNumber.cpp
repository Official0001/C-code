#include <stdio.h>

int main() {
    int n, rem, sum = 0, mul = 1; 
    printf("Enter Number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;
        sum = sum + rem;
        
        mul = mul * rem; 
        
        n = n / 10;
    }
    printf("Sum = %d\n", sum);
    printf("Mul = %d\n", mul);
	if(sum==mul)
		printf("Spy Number");
	else
		printf("Not Spy Number");
    
    return 0;
}


#include <stdio.h>

int main() {
    int number, r1, r2, r3, r4, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);           // 1234

    r1 = (number / 1000) % 10;        // 1234 / 1000 % 10 = 1
    
    r2 = (number / 100) % 10;         // 1234 / 100 % 10  = 2
    
    r3 = (number / 10) % 10;		  // 1234 / 10 % 10   = 3
    
    r4 = number % 10;				  // 1234 % 10 = 4

    sum = r1 + r2 + r3 + r4 ;  		 // 1+2+3+4 = 7

	printf("The sum of the digits is: %d\n", sum);

    return 0;
}


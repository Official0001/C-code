#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);
    for (int i = 1; i <= n; i++) {
        int originalNum = i;
        int result = 0;
        int numDigits = (int)log10(i) + 1;

        while (originalNum != 0) {
            int remainder = originalNum % 10;
            result += pow(remainder, numDigits);
            originalNum /= 10;
        }

        if (result == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}


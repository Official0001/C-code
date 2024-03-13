#include <stdio.h>

int main() {
    int min, max, count, i;
    printf("Enter the Min Range: ");
    scanf("%d", &min);
    printf("Enter the Max Range: ");
    scanf("%d", &max);

    if (min <= 1) {
        min = 2;  // Make sure the minimum range starts from 2, the smallest prime number.
    }

    while (min <= max) {
        count = 0;
        i = 2;

        while (i <= min / 2) {
            if (min % i == 0) {
                count++;
                break;
            }
            i++;
        }

        if (count == 0) {
            printf("\n%d is a prime number. Factors: 1, %d", min, min);
        }
        min++;
    }

    return 0;
}


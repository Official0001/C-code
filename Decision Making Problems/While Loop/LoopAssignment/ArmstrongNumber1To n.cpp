#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (int num = 1; num<=n; num++) {

        int sum = 0, count = 0, temp = num;

        // Count the number of digits
        while (temp != 0) {
            temp /= 10;
            count++;
        }

        temp = num;

        // Calculate the sum of digits raised to the power of count
        while (temp > 0) {
            int rem = temp % 10;
            sum = sum + pow(rem, count);
            temp = temp / 10;
        }

        // Check if the number is Armstrong
        if (num == sum) {
            printf("%d\n", num);
        }
    }

    return 0;
}


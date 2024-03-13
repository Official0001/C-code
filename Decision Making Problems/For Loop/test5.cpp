#include <stdio.h>

int main() {
    int n, i, num = 5;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Display the series using a while loop
    i = 1;
    while (i <= n) {
        printf("%d ", num);

        // Increment the counter
        i++;

        // Update num for the next iteration
        if (i % 2 == 0) {
            num += 7;  // Add 7 when i is even
        } else {
            num -= 2;  // Subtract 2 when i is odd
        }
    }

    return 0;
}


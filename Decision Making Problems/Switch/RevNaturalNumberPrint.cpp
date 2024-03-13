#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("P positive integer.\n");
    } else {
        printf("Natural numbers in reverse order from %d to 1:\n", n);

        while (n >= 1) {
            printf("%d\t", n);
            n--;
        }
    }

    return 0;
}


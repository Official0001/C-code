#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

        while (n >= 1) {
            printf("%d\t", n);
            n--;
        }
    

    return 0;
}


#include <stdio.h>

int p = 1;
void getPower(int base, int index) {
    if (index == 0) {
        p = p * base;
    }
   // p = p * base;

    getPower(base, --index);
}

int main() {
    int base, index;
    printf("Enter Base: ");
    scanf("%d", &base);
    printf("Enter Index: ");
    scanf("%d", &index);

    getPower(base, index);

    printf("Result: %d\n", p);

    return 0;
}


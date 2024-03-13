#include<stdio.h>

int main() {
    int a[10], len, i, j, candidate, count = 0;

    len = sizeof(a)/sizeof(a[0]);

    printf("Enter the elements in the array: ");
    for (i = 0; i < len; i++)
        scanf("%d", &a[i]);

    // Find the candidate for the majority element
    for (i = 0; i < len; i++) {
        if(count == 0) {
            candidate = a[i];
            count = 1;
        } else {
            if (a[i] == candidate) {
                count++;
            } else {
                count--;
            }
        }
    }

    // Verify if the candidate is a majority element
    count = 0;
    for (i = 0; i < len; i++) {
        if (a[i] == candidate) {
            count++;
        }
    }

    if (count > len / 2) {
        printf("\n%d is the majority element.", candidate);
        printf("\nIt occurred %d times.\n", count);
    } else {
        printf("There is no majority element.\n");
    }

    return 0;
}


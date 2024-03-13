#include <stdio.h>

int main() {
    int size;
    printf("Enter Size : ");
    scanf("%d", &size);

    int a[size];
    printf("Enter Elements in the array:\n");
    
    // Input elements in the array
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Find the smallest missing element
    int smallestMissing = 1;

    for (int i = 0; i < size; i++) {
        int found = 0; // Flag to check if the element is found

        for (int j = 0; j < size; j++) {
            if (a[j] == smallestMissing) {
                found = 1;
                break;
            }
        }

        // If the element is not found, it is the smallest missing element
        if (!found) {
            break;
        }

        smallestMissing++;
    }

    // Print the result
    printf("The smallest missing element is: %d\n", smallestMissing);

    return 0;
}


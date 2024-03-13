#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example usage without a function and with dynamic array
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter the value to find the ceiling for: ");
    scanf("%d", &x);

    // Initialize variables to store the result and the current ceiling
    int result = -1, currentCeiling;

    // Binary search to find the smallest element greater than or equal to x
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If arr[mid] is greater than or equal to x, update the result and search in the left half
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        }
        // If arr[mid] is less than x, search in the right half
        else {
            low = mid + 1;
        }
    }

    // If result is still -1, it means there is no element greater than or equal to x
    if (result != -1) {
        currentCeiling = arr[result];
        printf("The ceiling of %d is: %d\n", x, currentCeiling);
    } else {
        printf("No ceiling found for %d in the array\n", x);
    }

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}


#include <stdio.h>

void shiftEvenNumbers(int a[], int size) {
    int i, j, temp, evenCount = 0;

    for (i = 0; i < size; i++) {
        if (a[i] % 2 == 0) {
            temp = a[i];
            for (j = i; j < size - 1; j++) {
                a[j] = a[j + 1];
            }
            a[size - 1] = temp;
            evenCount++;
            i--; // Adjust index to recheck the current position
            size--; // Decrease the size of the array since an even number is shifted to the end
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int a[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Call the function to shift even numbers to the end
    shiftEvenNumbers(a, size);

    // Display the modified array
    printf("Array after shifting even numbers to the end:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}


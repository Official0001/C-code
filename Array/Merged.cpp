#include <stdio.h>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(array1) / sizeof(array1[0]);

    int array2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int mergedSize 
    int mergedArray[mergedSize];

    // Copy elements of the first array to the merged array
    for (int i = 0; i < size1; i++) {
        mergedArray[i] = array1[i];
    }

    // Copy elements of the second array to the merged array
    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = array2[i];
    }

    // Display the merged array
    printf("Merged Array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n");

    return 0;
}


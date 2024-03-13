#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    
    int present[size + 1]; // To store whether a number is present or not
    for (int i = 0; i < size + 1; i++)
        present[i] = 0; // Initialize all elements as not present
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0 && arr[i] <= size)
            present[arr[i]] = 1; // Mark the present numbers
    }
    
    int missing = 1;
    while (missing <= size && present[missing])
        missing++; // Find the smallest missing element
    
    printf("The smallest missing element is: %d\n", missing);

    return 0;
}


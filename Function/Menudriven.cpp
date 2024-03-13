#include <stdio.h>
#include <stdlib.h>

void arrayShow(int arr[10]) {
    printf("Array Elements: ");
    for (int i = 0; i < 10; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

void ascendingSort(int a[10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorting In Ascending: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void descendingSort(int a[10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorting In Descending: ");
    for (int i = 0; i < 10; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void searchValue(int a[10], int key) {
    int flag = 0;
    for (int i = 0; i < 10; i++) {
        if (a[i] == key) {
            flag = 1;
            break;
        }
    }
    if (flag)
        printf("Value found\n");
    else
        printf("Not found\n");
}

void addElement(int **a, int *size, int x, int pos) {
    // Increase the size by 1
    *size = *size + 1;

    // Reallocate memory to accommodate the increased size
    *a = (int *)realloc(*a, (*size) * sizeof(int));

    if (*a == NULL) {
        fprintf(stderr, "Memory reallocation failed.\n");
        exit(1);
    }

    // Shift elements to make space for the new element
    for (int i = *size - 1; i > pos - 1; i--) {
        (*a)[i] = (*a)[i - 1];
    }

    // Insert the new element at the specified position
    (*a)[pos - 1] = x;

    // Print the array after insertion
    printf("Array after insertion: ");
    for (int i = 0; i < *size; i++) {
        printf("%d  ", (*a)[i]);
    }
    printf("\n");
}

void deleteElement(int *a, int *size, int indexdelete) {
    if (indexdelete < 0 || indexdelete >= *size) {
        printf("Invalid index for deletion\n");
        return;
    }

    for (int i = indexdelete; i < *size - 1; i++) {
        a[i] = a[i + 1];
    }

    // Decrease the size by 1
    *size = *size - 1;

    printf("Array after deletion: ");
    for (int i = 0; i < *size; i++)
        printf("%d  ", a[i]);
    printf("\n");
}

void frequencyCount(int arr[10]) {
    int visited[10] = {0};

    for (int i = 0; i < 10; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < 10; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int *a, ch, size = 10;
    char op;

    // Allocate memory for the initial array
    a = (int *)malloc(size * sizeof(int));

    if (a == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    printf("Enter Array Elements: ");
    for (int i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    do {
        printf("OPERATION\n1. Show Array Elements\n2. Sort In Ascending\n3. Sort In Descending\n4. Search Specific Value\n5. Add Element in Array\n6. Delete Element at Specific Index\n7. Calculate Frequency of Each Element\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                arrayShow(a);
                break;

            case 2:
                ascendingSort(a);
                break;

            case 3:
                descendingSort(a);
                break;

            case 4:
                int skey;
                printf("\nEnter search key value: ");
                scanf("%d", &skey);
                searchValue(a, skey);
                break;

            case 5:
                int x, pos;
                printf("\nEnter the element to add: ");
                scanf("%d", &x);
                printf("Enter the position to add: ");
                scanf("%d", &pos);
                addElement(&a, &size, x, pos);
                break;

            case 6:
                int idelete;
                printf("Enter index number to delete: ");
                scanf("%d", &idelete);
                deleteElement(a, &size, idelete);
                break;

            case 7:
                frequencyCount(a);
                break;

            default:
                printf("Invalid Choice\n");
        }

        printf("Do You Want to Continue? Type 'y' or 'Y' to continue: ");
        _flushall();
        scanf(" %c", &op);

    } while (op == 'y' || op == 'Y');

    // Don't forget to free the allocated memory
    free(a);

    return 0;
}


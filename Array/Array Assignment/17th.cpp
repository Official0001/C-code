#include <stdio.h>
int main() 
{
    int n, targetSum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &targetSum);

    int start = 0, end = 0, currentSum = 0;
    int subarrayFound = 0;

    for (; end < n; end++) {
        currentSum += arr[end];

        while (currentSum > targetSum && start < end) {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == targetSum) {
            printf("Subarray found from index %d to %d\n", start, end);
            subarrayFound = 1;
            break;
        }
    }

    if (!subarrayFound) {
        printf("No subarray found with the given sum\n");
    }

    return 0;
}


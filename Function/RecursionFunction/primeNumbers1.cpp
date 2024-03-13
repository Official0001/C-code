#include<stdio.h> 
void findPrimes(int a[], int size, int count, int i, int j) 
{
    if (i < size) {
        count = 0;
        for (j = 1; j <= a[i]; j++) {
            if (a[i] % j == 0) {
                count++;
            }
        }
        if (count == 2)
            printf("%d\t", a[i]); 
    
        findPrimes(a, size, count, i+1, j);
    }
}

int main() {
    int size;
    printf("Enter Size: ");
    scanf("%d", &size);
    int no[size];
    printf("Enter values into array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &no[i]);

    findPrimes(no, size, 0, 0, 1);

    return 0;
}


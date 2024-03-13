#include<stdio.h> 
int main() 
{
    int num, a[5], len, flag;
    len = sizeof(a) / sizeof(a[0]);

    printf("Enter elements of the array:\n");
    for (int i = 0; i < len; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duck Numbers in the array:\n");
    for (int n = 0; n < len; n++) {
        int num = a[n];
        flag = 0; // Reset flag for each number

        while (num != 0) {
            if (num % 10 == 0) {
                flag = 1;
                break;
            }
            num = num / 10;
        }

        if (flag == 1) {
            printf("%d ", num);
        }
    }

    return 0;
}


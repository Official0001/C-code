#include <stdio.h>

int main() {
    int n,num=1;
    printf("Enter the limit : ");
    scanf("%d", &n);

    while (num <= n) {
        int temp = num;
        int sum = 0;

        int n_copy = num;
        while (n_copy > 0) {
            int fact = 1;
            int i = 1;
            int rem = n_copy % 10;

            while (i <= rem) {
                fact = fact * i;
                i++;
            }

            sum = sum + fact;
            n_copy = n_copy / 10;
        }

        if (temp == sum) {
            printf("%d\n", temp);
        }

        num++;
    }

    return 0;
}


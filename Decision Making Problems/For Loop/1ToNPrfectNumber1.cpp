#include<stdio.h>

int main() {
    int n, k, num, flag, i;

    printf("Enter Range: ");
    scanf("%d", &n);

    for (k = 2; k <= n; k++) {
       	  num = k;
          flag = 1;

        for (i = 2; i <= num / 2; i++) 
		{
            if (num % i == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d\t", num);
    }

    return 0;
}

